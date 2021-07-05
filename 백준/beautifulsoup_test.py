import pandas as pd
from urllib.request import urlopen
from bs4 import BeautifulSoup
from matplotlib import pyplot as plt
import requests

url = 'https://finance.naver.com/item/sise_day.nhn?code=068270&page=1'

# 전체 페이지 수 확인
with requests.get(url, headers={'User-agent': 'Mozilla/5.0'}) as doc:
    # doc : 파일경로나, url넘겨주는 위치, lxml : 웹페이지를 파싱할 방식
    html = BeautifulSoup(doc.text, 'lxml')
    pgrr = html.find('td', class_='pgRR')
    # pgRR : 맨 오른쪽 페이지
    # class_ : 파이썬에 class라는 지시어가 존재하기 때문에 구분하기 위해
    s = str(pgrr.a['href']).split('=')
    last_page = s[-1]
    # 마지막 원소가 전체 페이지 수

print(last_page)

# 전체 페이지 읽어오기
df = pd.DataFrame()
sise_url = 'https://finance.naver.com/item/sise_day.nhn?code=068270'
for page in range(1, int(last_page)+1):
    page_url = '{}&page={}'.format(sise_url, page)
    df = df.append(pd.read_html(page_url, header=0)[0])

df = df.dropna()
# 값이 빠진 행 제거
df = df.iloc[0:30]
df = df.sort_values(by='날짜')

plt.title('Celltrion (close)')
plt.xticks(rotation=45)
plt.plot(df['날짜'], df['종가'], 'co-')
plt.grid(color='gray', linestyle='--')
plt.show()
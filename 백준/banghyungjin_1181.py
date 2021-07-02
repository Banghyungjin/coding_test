import sys

length_of_list = int(sys.stdin.readline().split()[0])                           # 읽어올 리스트의 길이
strings = [sys.stdin.readline().split()[0] for _ in range(length_of_list)]      # 리스트
strings = list(set(strings))                                                    # 중복값 제거
strings.sort(key=lambda x: (len(x), x))                                         # 정렬 (1번째는 글자 순, 2번째는 사전 순)

for i in strings:                                                               # 정답 출력
    print(i)

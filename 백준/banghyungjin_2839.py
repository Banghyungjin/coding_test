import sys

weight = int(sys.stdin.readline().split()[0])   # 배달해야 하는 무게
number = weight // 5                            # 먼저 5로 배달 했을 때 나누어지는 몫
now_weight = weight % 5                         # 남은 배달 무게 = 5로 나눈 나머지

while now_weight % 3 != 0 and number > 0:       # 남은 배달 무게가 3으로 안나눠지면
    now_weight += 5                             # 5를 더하면서
    number -= 1                                 # 배달 카운트를 하나씩 낮춤
if now_weight % 3 == 0:                         # 남은 배달 무게가 3으로 나눠지면
    number += now_weight // 3                   # 배달 카운트에 3으로 나눈 몫을 추가
    print(number)                               # 정답 출력
else:                                           # 끝까지 3으로 나눌 수 없으면
    print(-1)                                   # -1 출력

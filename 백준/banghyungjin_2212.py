import sys

num_of_sensors = int(sys.stdin.readline().split()[0])
num_of_relay = int(sys.stdin.readline().split()[0])
sensors = list(set(map(int, sys.stdin.readline().split())))
sensors.sort()

first = sensors[0]
answer = 0


for i in range(1, sensors):                           # 2번 째 도시부터 루프
    answer += roads[i - 1] * now_city                       # 일단 현재 도시 유가로 온만큼 더해줌
    if cities[i] < now_city:                                # 해당 도시 유가가 현재 도시 유가보다 싸면
        now_city = cities[i]                                # 현재 도시 유가를 해당 도시 유가로 변경

print(answer)                                               # 정답 출력

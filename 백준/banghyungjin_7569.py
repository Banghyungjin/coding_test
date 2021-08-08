import sys
import copy
sys.setrecursionlimit(10**6)


def do_something(input_tomatoes, x, y, z, riped):                              # 현재 침수되지 않은 지역들의 개수 구하는 메소드
    if x > 0 and input_tomatoes[x - 1][y][z] == 0:
        input_tomatoes[x - 1][y][z] = 1
        riped += 1
    if x < H - 1 and input_tomatoes[x + 1][y][z] == 0:
        input_tomatoes[x + 1][y][z] = 1
        riped += 1
    if y > 0 and input_tomatoes[x][y - 1][z] == 0:
        input_tomatoes[x][y - 1][z] = 1
        riped += 1
    if y < N - 1 and input_tomatoes[x][y + 1][z] == 0:
        input_tomatoes[x][y + 1][z] = 1
        riped += 1
    if z > 0 and input_tomatoes[x][y][z - 1] == 0:
        input_tomatoes[x][y][z - 1] = 1
        riped += 1
    if z < M - 1 and input_tomatoes[x][y][z + 1] == 0:
        input_tomatoes[x][y][z + 1] = 1
        riped += 1
    return riped


M, N, H = map(int, sys.stdin.readline().split())                                    # 지역의 가로 세로 길이 읽어옴
tomatoes = []
now_riped = 0

for height in range(H):
    tomato_box = []
    for vertical in range(N):
        tomato_box.append(list(map(int, sys.stdin.readline().split())))
    tomatoes.append(tomato_box)

now_riped = do_something(tomatoes, 0, 1, 3, now_riped)
print(tomatoes)



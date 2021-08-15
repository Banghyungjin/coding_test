import sys

T = int(input())

for test_case in range(1, T + 1):
    M, N = input().split()
    N = int(N)
    M = list(M)
    counter = 1

    while N - len(M) ** counter > len(M):
        N -= len(M) ** counter
        counter += 1

    N -= 1
    temp_list = []

    while N > 0:
        temp_list.append(N % len(M))
        N = N // len(M)

    answer_list = ""

    for i in temp_list:
        answer_list = M[i] + answer_list

    print(f"#{test_case}", answer_list)

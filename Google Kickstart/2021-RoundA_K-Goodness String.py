import sys


def count_score():
    score = 0
    for i in range(N // 2):
        if S[i] != S[len(S) - i - 1]:
            score += 1
    if score == K:
        return 0
    elif score > K:
        return score - K
    else:
        return K - score


T = int(sys.stdin.readline().split()[0])
for i in range(T):
    N, K = map(int, sys.stdin.readline().split())
    S = list(sys.stdin.readline().split()[0])
    print(f"Case #{i + 1}:",count_score())

import sys

T = int(sys.stdin.readline().split()[0])
stairs = []

for i in range(T):
    stairs.append(int(sys.stdin.readline().split()[0]))

costs = []

for i in range(T):
    if i == 0:
        costs.append(stairs[0])
    elif i == 1:
        costs.append(sum(stairs[0:2]))
    elif i == 2:
        costs.append(max(stairs[0], stairs[1]) + stairs[2])
    else:
        costs.append(max(costs[i - 2], costs[i - 3] + stairs[i - 1]) + stairs[i])

print(costs[-1])

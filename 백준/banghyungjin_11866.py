import sys


def kill_him(first, second):
    if first != 1:
        # print((kill_him(first - 1, second) + 3) % first)
        return (kill_him(first - 1, second) + 3) % first
    else:
        # print(0)
        return 0


numbers = list(map(int, sys.stdin.readline().split()))
number_list = []
for i in range(numbers[0]):
    number_list.append(i + 1)
count = 0
index = 0
index_count = 1
answer = "<"

while count < numbers[0]:
    if index_count == numbers[1]:
        answer += str(number_list[index])
        del number_list[index]
        if len(number_list) == 0:
            break
        answer += ", "
        count += 1
        index %= len(number_list)
        index_count = 1

    if len(number_list) != 0:
        index += 1
        index %= len(number_list)
        index_count += 1
    else:
        break

answer += ">"

print(answer)


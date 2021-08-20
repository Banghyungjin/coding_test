import sys

K = int(sys.stdin.readline().split()[0])
stringList = ['', '1001', '0110']
intList = [-1]
final_string = ''

while len(intList) < K / 4:
    length = len(intList)
    for i in range(length):
        intList.append(intList[i] * -1)

while len(final_string) < K:
    for i in intList:
        if len(final_string) >= K:
            break
        else:
            final_string += stringList[i]

print(final_string[K - 1])

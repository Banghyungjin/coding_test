import sys
import re

numbers = int(sys.stdin.readline().split()[0])
input_list = []

for i in range(numbers):
    input_list.append(sys.stdin.readline().split()[0])

print(input_list)

for i in input_list:
    # print(re.sub('(100+1+|01)+', '', i))
    if re.sub('(100+1+|01)+', '', i) == '':
        print('YES')
    else:
        print('NO')

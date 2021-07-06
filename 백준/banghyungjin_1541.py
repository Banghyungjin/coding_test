import sys

func = sys.stdin.readline()                                                                 # 식
is_positive = 1                                                                             # +- 구분
input_number = ''                                                                           # 넣을 숫자
input_numbers = []                                                                          # 숫자 리스트
for i in func:                                                                              # 식을 읽어와서 부호 기준으로 나눔
    if i == '-':
        if int(input_number) > 0 and len(input_numbers) > 0 and input_numbers[-1] < 0:
            input_numbers[-1] -= int(input_number)
        else:
            input_numbers.append(is_positive * int(input_number))
        is_positive = -1
        input_number = ''
    elif i == '+':
        if int(input_number) > 0 and len(input_numbers) > 0 and input_numbers[-1] < 0:
            input_numbers[-1] -= int(input_number)
        else:
            input_numbers.append(is_positive * int(input_number))
        is_positive = 1
        input_number = ''
    else:
        input_number += i
if int(input_number) > 0 and len(input_numbers) > 0 and input_numbers[-1] < 0:
    input_numbers[-1] -= int(input_number)
else:
    input_numbers.append(is_positive * int(input_number))

answer = 0
for i in input_numbers:
    answer += i
print(answer)   # 정답 출력

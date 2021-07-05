import sys

def positive(number, system) -> int:
    answer = ''
    while number >= system:
        answer = str(number % system) + answer
        number //= system
    if number != 0:
        answer = str(number) + answer
    # return system ** ((len(answer) // 2) + 1)
    returner = 0
    counter = 0
    for i in range(len(answer)):
        if i % 2 == 1 and answer[i] != '0':
            # print(i, returner + system ** ((len(answer) - i) // 2))
            return returner + system ** ((len(answer) - i) // 2)
        elif i % 2 == 0:
            # print(i, (system ** ((len(answer) - i) // 2)) * int(answer[i]))
            returner += (system ** ((len(answer) - i) // 2)) * int(answer[i])
            if int(answer[i]) == system - 1:
                counter += 1
    # print('counter', counter)
    if counter == (len(answer) // 2) + 1:
        returner += 1
    return returner


input_list = list(map(int, sys.stdin.readline().split()))                       # 읽어올 리스트의 길이
number = input_list[0]
system = input_list[1]

print(positive(number, system))                                                                   # 정답 출력

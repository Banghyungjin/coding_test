import sys

count = int(sys.stdin.readline().split()[0])                    # 첫줄의 리스트 원소 숫자 읽어옴
list_input = []                                                 # 사람 키 리스트
answer = 0                                                      # 보이는 사람 쌍 숫자 = 정답
for i in range(0, count):
    nowPerson = int(sys.stdin.readline().split()[0])
    list_input.append(nowPerson)

stack = [0]
for i in range(0, count - 1):
    if list_input[i] > stack[-1]:
        stack = [list_input[i]]
    else:
        stack.append(list_input[i])
    print(stack)
    answer += len(stack)

print(answer)       # 정답 반환

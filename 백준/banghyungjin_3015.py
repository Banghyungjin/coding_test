import sys

count = int(sys.stdin.readline().split()[0])    # 첫줄의 리스트 원소 숫자 읽어옴
list_input = []         # 사람 키 리스트
answer = 0              # 보이는 사람 쌍 숫자 = 정답
left = 0
for i in range(count):
    nextPerson = int(sys.stdin.readline().split()[0])
    list_input.append(nextPerson) # 배열에 순서대로 사람 키를 넣어줌
    if 
            
                    
                
        answer += 1
        
        


for i in range(count - 1):  # 
    right = 0    # 키 비교용 초기값    
    left = list_input[i]
    for j in range(i + 1, count):
        if list_input[j] >= right:
            right = list_input[j]
            answer += 1
            if right > left:
                break
print(answer)       # 정답 반환
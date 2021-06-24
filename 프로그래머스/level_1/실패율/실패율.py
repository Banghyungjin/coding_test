def solution(N, stages):
    answer = []
    played = []
    failed = []
    temp_answer = []
    max = len(stages)

    for i in range(N):
        failed.append(stages.count(i + 1))
        played.append(max)
        max -= stages.count(i + 1)

    for i in range(N):
        if played[i] != 0:
            temp_answer.append([i + 1, failed[i] / played[i]])
        else:
            temp_answer.append([i + 1, 0])

    temp_answer.sort(key=lambda x: x[1], reverse=True)

    for i in temp_answer:
        answer.append(i[0])

    return answer
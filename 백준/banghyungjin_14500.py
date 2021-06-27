import sys


def i_mino(input_width_height, input_paper, x, y):
    sums = [0]
    if y < input_width_height[1] - 3:
        sums.append(input_paper[x][y] + input_paper[x][y + 1] + input_paper[x][y + 2] + input_paper[x][y + 3])
    if x < input_width_height[0] - 3:
        sums.append(input_paper[x][y] + input_paper[x + 1][y] + input_paper[x + 2][y] + input_paper[x + 3][y])
    return max(sums)


def o_mino(input_width_height, input_paper, x, y):
    if x < input_width_height[0] - 1 and y < input_width_height[1] - 1:
        return input_paper[x][y] + input_paper[x][y + 1] + input_paper[x + 1][y] + input_paper[x + 1][y + 1]
    return 0


def t_mino(input_width_height, input_paper, x, y):
    sums = []
    if x > 0 and y < input_width_height[1] - 2:
        sums.append(input_paper[x][y] + input_paper[x][y + 1] + input_paper[x][y + 2] + input_paper[x - 1][y + 1])
    if x < input_width_height[0] - 1 and y < input_width_height[1] - 2:
        sums.append(input_paper[x][y] + input_paper[x][y + 1] + input_paper[x][y + 2] + input_paper[x + 1][y + 1])
    # if x < input_width_height[0] - 2 and y < input_width_height[1] - 1:
    #     sums.append(input_paper[x][y] + input_paper[x + 1][y] + input_paper[x + 2][y] + input_paper[x + 1][y + 2])



width_height = list(map(int, sys.stdin.readline().split()))

paper = []
for i in range(width_height[0]):
    paper.append(list(map(int, sys.stdin.readline().split())))

for i in range(width_height[0]):
    for j in range(width_height[1]):
        print(i, j, " : ", i_mino(width_height, paper, i, j), o_mino(width_height, paper, i, j))

import sys


def go_right(x, y, input_go_board, count, prev) -> bool:
    if count == 5:
        return True
    elif y == 18:
        return False
    elif input_go_board[x][y] == prev:
        count += 1
        return go_right(x, y + 1, input_go_board, count, prev)
    else:
        return False


def go_left_down(x, y, input_go_board, count, prev) -> bool:
    if count == 5:
        return True
    elif y == 0 or x == 18:
        return False
    elif input_go_board[x][y] == prev:
        count += 1
        return go_right(x + 1, y - 1, input_go_board, count, prev)
    else:
        return False


def go_down(x, y, input_go_board, count, prev) -> bool:
    if count == 5:
        return True
    elif x == 18:
        return False
    elif input_go_board[x][y] == prev:
        count += 1
        return go_right(x + 1, y, input_go_board, count, prev)
    else:
        return False


def go_right_down(x, y, input_go_board, count, prev) -> bool:
    if count == 5:
        return True
    elif y == 18 or x == 18:
        return False
    elif input_go_board[x][y] == prev:
        count += 1
        return go_right(x + 1, y + 1, input_go_board, count, prev)
    else:
        return False


go_board = []
for i in range(19):
    go_board.append(sys.stdin.readline().split())                                   # 문제의 판때기 크기 읽어옴

for i in range(19):
    for j in range(19):
        if go_right_down(i, j, go_board, 0, go_board[i][j]):
            print(i, j)
import sys
import math


def make_int(input_num) -> int:
    return_num = math.floor(input_num)
    if input_num - return_num >= 0.5:
        return_num += 1
    return return_num


num_of_ratings = int(sys.stdin.readline().split()[0])
if num_of_ratings != 0:
    ratings = []

    for i in range(num_of_ratings):
        ratings.append(int(sys.stdin.readline().split()[0]))

    ratings.sort()
    excepted = make_int(num_of_ratings * 0.15)
    if excepted != 0:
        ratings = ratings[excepted:]
        ratings = ratings[:(excepted * -1)]
    print(make_int(sum(ratings) / len(ratings)))
else:
    print(0)

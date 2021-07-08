import sys

coords = list(map(int, sys.stdin.readline().split()))
coords[2] -= coords[0]
coords[3] -= coords[1]
print(min(coords))

import sys

class Node:
    def __init__(self, time):
        self.time = time
        self.parent = []
    def set_parent(self, parent):
        self.parent.append(parent) 

def findTime(node: Node):
    prev = 0
    for parent in node.parent:
        now = findTime(parent)
        if now > prev:
            prev = now
    return prev + node.time
    
count = int(sys.stdin.readline().split()[0])

for i in range(count):
    buildings = []
    input_number = sys.stdin.readline().split()
    input_times =  sys.stdin.readline().split()
    for j in range(int(input_number[0])):
        buildings.append(Node(int(input_times[j])))
    for j in range(int(input_number[1])):
        node = sys.stdin.readline().split()
        buildings[int(node[1]) - 1].set_parent(buildings[int(node[0]) - 1])
    target = buildings[int(sys.stdin.readline().split()[0]) - 1]
    print(findTime(target))
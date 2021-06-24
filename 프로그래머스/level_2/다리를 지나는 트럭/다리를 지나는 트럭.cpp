#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int bridge_weight = 0;
    queue<int> bridge;
    queue<int> trucks;
    for (int i = 0; i < bridge_length; i++) {
        bridge.push(0);
    }
    for (int i = 0; i < truck_weights.size(); i++) {
        trucks.push(truck_weights[i]);
    }
    while (!trucks.empty()) {
        bridge_weight -= bridge.front();
        bridge.pop();       
        if (bridge_weight + trucks.front() <= weight) {
            bridge_weight += trucks.front();
            bridge.push(trucks.front());
            trucks.pop();
        }
        else {
            bridge.push(0);
        }
        answer++;
    }
    answer += bridge_length;
    
    
    return answer;
}
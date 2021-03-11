#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> foods (scoville.begin(), scoville.end());
    while(foods.top() < K && foods.size() > 1) {
        int a = foods.top(); 
        foods.pop();
        foods.push(a + foods.top() * 2);
        foods.pop();
        answer++;
    }
    if (foods.top() < K) answer = -1;    
    return answer;
}
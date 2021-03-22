#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int time = 0;
    for (int i = 0; i < prices.size() - 1; i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            time++;
            if (prices[i] > prices[j]) {
                break;
            }
        }
        answer.push_back(time);
        time = 0;
    }
    answer.push_back(0);
    return answer;
}
#include <string>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int time = 0;
    double x = 0;
    queue<int> q;
    for (int i = 0; i < progresses.size(); i++) {
        x = (100.0 - (1.0 * progresses[i]))/(1.0 * speeds[i]);
        x = ceil(x);    
        time = x;
        q.push(time);
    }
    int tech_day = q.front();
    int tech_no = 1;
    q.pop();
    while(!q.empty()) {
        if (tech_day >= q.front()) {
            tech_no ++;
        }
        else {
            tech_day = q.front();
            answer.push_back(tech_no);
            tech_no = 1;
        }
        q.pop();
    }
    answer.push_back(tech_no);
    return answer;
}
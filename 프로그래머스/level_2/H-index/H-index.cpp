#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    priority_queue<int> paper(citations.begin(), citations.end());
    while(!paper.empty()) {
        if (answer >= paper.top()) break;
        else if (answer < paper.top()) answer++;
        paper.pop();
    }
    
    return answer;
}
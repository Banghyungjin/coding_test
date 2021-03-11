#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> index;
    queue<int> prints;
    for (int i = 0 ; i < priorities.size(); i++) {
        index.push(i);
        prints.push(priorities[i]);
    }
    sort(priorities.begin(), priorities.end());
    reverse(priorities.begin(), priorities.end());
    vector<int>::iterator it = priorities.begin();
    while(true) {
        if(prints.front() == *it) {
            answer++;
            if (index.front() == location){
                break;
            }
            prints.pop();
            index.pop();
            it++;
        }
        else {
            prints.push(prints.front());
            prints.pop();
            index.push(index.front());
            index.pop();
        }
    }
    return answer;
}
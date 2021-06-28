#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    priority_queue<int, vector<int>, less<int>> temp_answer;
    while(n > 0) {
        temp_answer.push(n % 10);
        n /= 10;
    }
    while (!temp_answer.empty()) {
        answer *= 10;
        answer += temp_answer.top();
        temp_answer.pop();
    }
    return answer;
}
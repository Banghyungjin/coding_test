#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> ternary;
    while(n > 2) {
        ternary.push(n % 3);
        n /= 3;
    }
    ternary.push(n);
    int count = 1;
    while(!ternary.empty()) {
        answer += ternary.top() * count;
        ternary.pop();
        count *= 3;
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int a, int b) {
        queue<int> alpha;
        queue<int> beta;
        string a_string = to_string(a);
        string b_string = to_string(b);
        for (int i = 0; i < a_string.length(); i++) {
            alpha.push(a_string[i] - '0');
        }
        for (int i = 0; i < b_string.length(); i++) {
            beta.push(b_string[i] - '0');
        }
        if (a == b) return true;
        int count = 0;
        while (count < 8) {
            if (alpha.front() != beta.front()) return alpha.front() < beta.front();
            else {
                alpha.push(alpha.front());
                alpha.pop();
                beta.push(beta.front());
                beta.pop();
                count++;
            }
        }
        return true;
    }
};

string solution(vector<int> numbers) {
    string answer = "";
    priority_queue<int, vector<int>, compare> number(numbers.begin(), numbers.end());
    if (number.top() != 0) {
        while (!number.empty()) {
            answer += to_string(number.top());
            number.pop();
        }
    }
    else {
        answer = "0";
    }
    return answer;
}
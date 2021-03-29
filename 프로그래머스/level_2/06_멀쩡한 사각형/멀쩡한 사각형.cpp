#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int w, int h) {
    long long answer = 0;
    long long width = w;
    long long temp_ans;
    while ((width * 1.0 / h * 1.0) <= w) {
        temp_ans = w - (width * 1.0 / h * 1.0);
        answer += temp_ans * 2;
        width += w;
    }
    return answer;
}

int main() {
    string is_right = "True";
    int answer = 80;
    int w = 8;
    int h = 12;
    int my_answer = solution(w, h);
    if (answer != my_answer) is_right = "False";
    cout << is_right;
}
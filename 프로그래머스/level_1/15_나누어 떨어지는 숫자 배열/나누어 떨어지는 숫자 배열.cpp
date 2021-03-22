#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i : arr) {
        if (i % divisor == 0) answer.push_back(i);
    }
    sort(answer.begin(), answer.end());
    if (answer.size() == 0) answer.push_back(-1);
    return answer;
}

int main() {
    vector<int> arr = { 5,9,7,10 };
    int divisor = 5;
    vector<int> answer = { 5,10 };
    vector<int> my_ans = solution(arr, divisor);
    bool is_true = true;
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] != my_ans[i]) is_true = false;
    }
    cout << is_true;
}
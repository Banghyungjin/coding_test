#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i : arr) {
        if (i != answer.back()) answer.push_back(i);
    }

    return answer;
}

int main() {
    vector<int> arr = { 1,1,3,3,0,1,1 };
    vector<int> answer = { 1,3,0,1 };
    vector<int> my_ans = solution(arr);
    bool is_true = true;
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] != my_ans[i]) is_true = false;
    }
    cout << is_true;
}
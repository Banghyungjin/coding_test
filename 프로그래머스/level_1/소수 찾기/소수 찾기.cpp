#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> temp_ans;
    for (int i = 0; i <= n; i++) {
        temp_ans.push_back(i);
    }
    temp_ans[0] = -1;
    temp_ans[1] = -1;
    for (int i = 0; i < temp_ans.size(); i++) {
        if (temp_ans[i] != -1) {
            for (int j = i + i; j < temp_ans.size(); j += i) {
                temp_ans[j] = -1;
            }
        }
    }
    for (int i = 0; i < temp_ans.size(); i++) {
        if (temp_ans[i] != -1) answer++;
    }
    return answer;
}

int main() {
    int n = 10;
    if (solution(n) == 4) {
        cout << true;
    }
    else {
        cout << false;
    }
}
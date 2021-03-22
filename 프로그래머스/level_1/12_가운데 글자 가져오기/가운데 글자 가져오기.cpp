#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int length = s.length();
    answer += s[length / 2];
    if (length % 2 == 0) answer = s[(length / 2) - 1] + answer;
    return answer;
}

int main() {
    string s = "abcde";
    string answer = "c";
    bool is_true = true;
    if (solution(s) != answer) is_true = false;
    cout << is_true;
}
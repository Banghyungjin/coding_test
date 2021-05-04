#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 1;
    for (char c : s) {
        if (c != ' ') {
            if (count) {
                c = toupper(c);
                count --;
            }
            else {
                c = tolower(c);
                count++;
            }
        }
        else {
            count = 1;
        }
        answer += c;
    }
    return answer;
}
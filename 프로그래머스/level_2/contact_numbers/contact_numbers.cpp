#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    vector<vector<string>> number;
    for (int i = 0; i < 10; i++) {
        vector<string> input;
        number.push_back(input);
    }
    for (int i = 0; i < phone_book.size(); i ++) {
        char temp = (int)phone_book[i][0];
        int num = temp - '0';
        number[num].push_back(phone_book[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (number[i].size() > 1) {
            for (int j = 0; j < number[i].size() - 1; j++) {
                //cout << number[i][j] << " ";
                for (int k = j + 1; k < number[i].size(); k++) {
                    string first = number[i][j];
                    string second = number[i][k].substr(0,number[i][j].length());
                    if (!first.compare(second)) {
                        answer = false;
                        return answer;
                    }
                }
            }
            cout << endl;
        }
    }   
    return answer;
}
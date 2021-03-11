#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;



int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<string> closet;
    for (int i = 0; i < clothes.size();i++) {
        closet.push_back(clothes[i][1]);
    }
    sort(closet.begin(),closet.end());
    vector<int>number;
    int start = 0;
    string start_str = closet[0];
    for (int i = 0; i < closet.size();i++) {
        if (closet[i] != start_str) {
            number.push_back(start);
            start = 1;
            start_str = closet[i];
        }
        else {
            start++;
        }
    }
    number.push_back(start);
    for (int i = 0; i < number.size(); i++) {
        answer = answer * (number[i] + 1);
    }
    answer--;
    
    return answer;
}
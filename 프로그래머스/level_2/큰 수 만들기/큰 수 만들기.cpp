#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<int> input_number;           //int 벡터 사용
    int count = 0;
    int input = number[0] - '0';        //먼저 number의 가장 앞 숫자를 벡터에 넣음
    input_number.push_back(input);
    number = number.substr(1);
    for (char a : number) {             //그 다음부터 number를 차례대로 탐색
        input = a - '0';
        if (input_number.back() < input && count != k) {
            while (!input_number.empty() && input_number.back() < input && count != k) {
                input_number.pop_back(); //number의 숫자가 벡터의 마지막보다 작으면 아닐때까지 벡터의 마지막 숫자 제거
                count++;               //k개 까지만 제거 하도록 카운트 설정
            }
        }
        input_number.push_back(input);  //number의 숫자가 벡터의 마지막보다 작지 않으면 벡터의 맨뒤에 추가
    }
    while (count != k) {            //위의 과정에서 k개 만큼 숫자가 제거되지 않았으면 남은 만큼 벡터의 마지막 부분 제거
        input_number.pop_back();
        count++;
    }
    for (int i : input_number) {    //정답을 answer에 대입
        answer += to_string(i);
    }
    return answer;
}

int main() {
    string is_right = "True";
    string number = "4177252841";
    int k = 4;
    string answer = "775841";
    string my_answer = solution(number, k);
    if (answer != my_answer) is_right = "False";
    cout << is_right;
}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<int> input_number;           //int ���� ���
    int count = 0;
    int input = number[0] - '0';        //���� number�� ���� �� ���ڸ� ���Ϳ� ����
    input_number.push_back(input);
    number = number.substr(1);
    for (char a : number) {             //�� �������� number�� ���ʴ�� Ž��
        input = a - '0';
        if (input_number.back() < input && count != k) {
            while (!input_number.empty() && input_number.back() < input && count != k) {
                input_number.pop_back(); //number�� ���ڰ� ������ ���������� ������ �ƴҶ����� ������ ������ ���� ����
                count++;               //k�� ������ ���� �ϵ��� ī��Ʈ ����
            }
        }
        input_number.push_back(input);  //number�� ���ڰ� ������ ���������� ���� ������ ������ �ǵڿ� �߰�
    }
    while (count != k) {            //���� �������� k�� ��ŭ ���ڰ� ���ŵ��� �ʾ����� ���� ��ŭ ������ ������ �κ� ����
        input_number.pop_back();
        count++;
    }
    for (int i : input_number) {    //������ answer�� ����
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
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string days[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string answer = "";
    int time = 0;
    if (a > 1) {
        for (int i = 0; i < a - 1 ; i++) {
            time += months[i]; 
        }
    }
    time += b - 1;
    time = time % 7;
    answer = days[time];
    return answer;
}
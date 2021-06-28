#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long number = num;
    for (int i = 0; i < 500; i++) {
        if (number == 1) {
            return i;
        }
        else if (number % 2 == 0) {
            number = number / 2;
        }
        else {
            number = (number * 3) + 1;
        }
    }
    return -1;
}
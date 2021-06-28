#include <string>
#include <vector>

using namespace std;

bool is_even(int input) {
    int count = 1;
    for (int i = 2; i <= input; i++) {
        if (input % i == 0) {
            count ++;
        }
    }
    if (count % 2 == 0) {
        return true;
    }
    return false;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) {
        if (is_even(i)) {
            answer += i;
        }
        else {
            answer -= i;
        }
    }
    return answer;
}
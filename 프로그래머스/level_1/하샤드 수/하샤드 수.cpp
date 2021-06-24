#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int x2 = x;
    int dividee = 0;
    while (x2 > 0) {
        dividee += x2 % 10;
        x2 /= 10;
    }
    if (x % dividee != 0) {
        answer = false;
    }
    return answer;
}
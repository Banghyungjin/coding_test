#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int n = 12;
    if (solution(n) == 28) {
        cout << true;
    }
    else {
        cout << false;
    }
}
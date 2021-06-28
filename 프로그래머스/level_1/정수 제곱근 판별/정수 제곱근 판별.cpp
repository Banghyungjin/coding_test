#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long root = sqrt(n);
    if (root * root == n) {
        answer = pow(root + 1,2); 
    }
    else {
        answer = -1;
    }
    return answer;
}
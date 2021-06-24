#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int input) {
    for (int i = 2; i < sqrt(input) + 1; i++) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> sums;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k ++) {
                if (is_prime(nums[i] + nums[j] + nums[k])) {
                    answer ++;
                }
            }
        }    
    }
    return answer;
}
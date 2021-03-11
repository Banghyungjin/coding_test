#include <string>
#include <vector>
#include <iostream>

using namespace std;

int first(vector<int>& lost, vector<int>& reserve) {
    int ans = 0;
    for (int i = 0; i < lost.size(); i++) {
        for (int j = 0; j < reserve.size(); j++) {
            if (lost[i] == reserve[j]) {
                lost[i] = -1;
                reserve[j]= -1;
                ans++;
                break;
            }
        }
    }
    return ans;
}

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int last_one = 0;
    int first_one = first(lost, reserve);
    
    for (int i = 0; i < lost.size(); i++) {
        cout << lost[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < reserve.size(); i++) {
        cout << reserve[i] << " ";
    }
    cout << endl;
    
    if (lost.size() > 0 && reserve.size() > 0) {
        for (int i = 0; i < lost.size(); i++) {
            for (int j = 0; j < reserve.size(); j++) {
                if (lost[i] == reserve[j] - 1 || lost[i] == reserve[j] + 1 ) {
                    if (reserve[j] != last_one) {
                        answer++;
                        last_one = reserve[j];
                        break;
                    }
                }
            }
        }
    }
    answer = n - lost.size() + answer + first_one;
    
    cout << answer;
    return answer;
}
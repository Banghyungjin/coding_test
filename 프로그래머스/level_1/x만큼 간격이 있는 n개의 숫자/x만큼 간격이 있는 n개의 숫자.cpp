#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int step = x;
    for (int i = 0; i < n; i++) {
        answer.push_back(x);
        x += step;
    }
    return answer;
}
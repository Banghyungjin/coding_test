#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int worst = 7;
    int best = 7;
    for (auto i : lottos) {
        if (i != 0) {
            for (auto j : win_nums) {
                if (i == j) {
                    worst --;
                    best --;
                }
            }
        }
        else {
            best --;
        }
    }
    if (best == 7) {
        best --;
    }
    if (worst == 7) {
        worst --;
    }
    answer.push_back(best);
    answer.push_back(worst);
    return answer;
}
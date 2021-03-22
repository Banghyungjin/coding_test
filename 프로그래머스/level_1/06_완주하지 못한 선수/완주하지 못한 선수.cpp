#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    for (int i = 0; i < completion.size(); i++) {
        if (participant[i].compare(completion[i])) {
            answer = participant[i];
            break;
        }
    }
    if (answer.length() == 0) {
        answer = participant[participant.size()-1];
    }
    return answer;
}
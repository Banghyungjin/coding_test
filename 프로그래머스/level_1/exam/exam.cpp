#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int first(vector<int> answers, queue<int> student_answer) {
    int score = 0;
    for(int i: answers) {
        if (i == student_answer.front()) score++;
        student_answer.push(student_answer.front());
        student_answer.pop();
    }
    return score;
}

int second(vector<int> answers, queue<int> student_answer) {
    int score = 0;
    int counter = 1;
    for(int i: answers) {
        if (counter) {
            if (i == 2) score++;
            counter = 0;
        }
        else {
            if (i == student_answer.front()) score++;
            student_answer.push(student_answer.front());
            student_answer.pop();
            counter = 1;
        }
    }
    return score;
}

int third(vector<int> answers, queue<int> student_answer) {
    int score = 0;
    int counter = 0;
    for(int i: answers) {
        if (i == student_answer.front()) score++;
        if (counter) {
            student_answer.push(student_answer.front());
            student_answer.pop();
            counter = 0;
        }
        else counter = 1;
    }
    return score;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores;
    vector<int> third_one_temp = {3,1,2,4,5};
    queue<int> first_one;
    queue<int> second_one;
    queue<int> third_one;
    for(int i = 1; i <= 5; i++) {
        first_one.push(i);
        if (i != 2) second_one.push(i);
    }
    for (int i: third_one_temp) third_one.push(i);
    scores.push_back(first(answers, first_one));
    scores.push_back(second(answers, second_one));
    scores.push_back(third(answers, third_one));
    int max = *max_element(scores.begin(), scores.end());
    for (int i = 0; i < 3; i++) {
        if (scores[i] == max) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}
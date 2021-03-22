#include <string>
#include <vector>
#include <iostream>

using namespace std;

int erase(vector<int>& inputVector);

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> temp;

    for (int i = 0; i < moves.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[j][moves[i] - 1] != 0) {
                temp.push_back(board[j][moves[i] - 1]);
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }
    answer = erase(temp);
    return answer;
}

int erase(vector<int>& inputVector) {
    bool ans = true;
    int answer = 0;
    while (ans) {
        ans = false;
        if (inputVector.size() > 1) {
            for (int i = 0; i < inputVector.size() - 1; i++) {
                if (inputVector[i] == inputVector[i + 1]) {
                    answer += 2;
                    if (inputVector.size() == 2) {
                        return answer;
                    }
                    inputVector.erase(inputVector.begin() + i);
                    inputVector.erase(inputVector.begin() + i);
                    ans = true;
                }
            }
        }
        else {
            ans = false;
        }
    }
    return answer;
}

int main() {
    vector<vector<int>> board = { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 3} ,{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
    int result = 4;
    int answer = solution(board, moves);
    if (result == answer) cout << "right";
    else cout << "wrong";
}
#include <string>
#include <vector>

using namespace std;

int distance(vector<int>target, vector<int>hand) {
    int a = target[0]-hand[0];
    int b = target[1]-hand[1];
    if (a < 0) {
        a = a * -1;
    }
    if (b < 0) {
        b = b * -1;
    }
    return (a + b);
}


string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> coords = {{3,1}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            vector<int>temp_coord;
            temp_coord.push_back(i);
            temp_coord.push_back(j);
            coords.push_back(temp_coord);
        }
    }
    vector<int> left = {3,0};
    vector<int> right = {3,2};
    for(auto i : numbers) {
        if(i == 1 || i == 4 || i == 7){
            answer += "L";
            left = coords[i];
        }
        else if(i == 3 || i == 6 || i == 9){
            answer += "R";
            right = coords[i];
        }
        else {
            if (distance(coords[i], left) < distance(coords[i], right)) {
                answer += "L";
                left = coords[i];
            }
            else if (distance(coords[i], left) > distance(coords[i], right)) {
                answer += "R";
                right = coords[i];
            }
            else if (hand == "right") {
                answer += "R";
                right = coords[i];
            }
            else {
                answer += "L";
                left = coords[i];
            }
        }
    }
    return answer;
}
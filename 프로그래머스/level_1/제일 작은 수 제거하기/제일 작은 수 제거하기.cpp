#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_number = arr[0];
    int counter = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min_number) {
            min_number = arr[i];
            counter = i;
        }
    }
    arr.erase(arr.begin() + counter);
    if (arr.empty()) {
        arr.push_back(-1);
    }
    return arr;
}
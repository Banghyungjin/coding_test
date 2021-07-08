#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int num_of_people;
    int counter;
    int count = 1;
    string answer = "<";
    cin >> num_of_people >> counter;
    
    queue<int> people_queue;
    
    for(int i = 0; i < num_of_people; i++) {
        people_queue.push(i + 1);
    }
    
    while(!people_queue.empty()) {
        if (count == counter) {
            answer += to_string(people_queue.front());
            if(people_queue.size() > 1) {
                answer += ", ";
            }
            count = 1;
        }
        else {
            people_queue.push(people_queue.front());
            
            count ++;
        }
        people_queue.pop();
    }
    answer += ">";
    cout << answer;
    return 0;
}

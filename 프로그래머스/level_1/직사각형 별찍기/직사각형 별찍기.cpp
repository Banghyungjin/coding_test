#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    string output = "";
    for (int i = 0; i < a; i++) {
        output += "*";
    }
    for (int i = 0; i < b; i++) {
        cout << output << "\n";
    }
    return 0;
}
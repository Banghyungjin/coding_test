#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
string changeUpperChar(string inputString) ;

int main() {
	cout << "Enter the score count: ";
	int maxSize;
	cin >> maxSize;

	int* const scores = new int[maxSize];
	int count = 0;
	while (true) {
		cout << "Enter command: (add, sum, average, quit) ";
		string inputCommand;
		cin >> inputCommand;
		inputCommand = changeUpperChar(inputCommand);
		if (inputCommand == "ADD") {
			if (count >= maxSize) {
				cout << "Too many scores\n";
			}
			else {
				cout << "Enter score: ";
				int inputNumber;
				cin >> inputNumber;
				if (inputNumber > 100 || inputNumber < 0) {
					cout << "should be between 0 and 100";
				}
				else {
					scores[count] = inputNumber;
					count++;
					cout <<"      "<< inputNumber << " added\n";
				}
			}
		}
		else if (inputCommand == "SUM") {
			int sum = 0;
			for (int i = 0; i < count; i++) {
				sum += scores[i];
			}
			cout << "      " << "Sum: " << sum << "\n";
		}
		else if (inputCommand == "AVERAGE") {
			double average = 0;
			if (count != 0) {
				for (int i = 0; i < count; i++) {
					average += scores[i];
				}
				average = average / count;
				cout << "      " << "Average: " << average<<"\n";
			}
			else {
				cout << "      " << "Average: 0\n";
			}
		}
		else if (inputCommand == "QUIT") {
			cout << "      " << "Bye\n";
			break;
		}
			
		
	}

	delete[] scores;
}


string changeUpperChar(string inputString) {
	transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
	return inputString;
}
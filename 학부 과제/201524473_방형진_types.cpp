# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

float orderMake(const string& input, const float input2);
string trans(string input);
int counterFunc(const string& input, int input2);

int main()
{
	int count = 0;
	float answer = 0;
	string x;
	while (count != -1) {
		cout << "Enter Command and Numbers : ";
		cin >> x;
		x = trans(x);
		count = counterFunc(x, count);
		//cout << "cout = " << count;
		answer = orderMake(x, answer);
	}
	
	return 0;
}

string trans(string input) 
{
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	return input;
}

float orderMake(const string& input, const float input2) 
{
	float x = 0;
	float y = 0;
	float z = 0;
	
	if (input == "ADD")
	{
		cin >> x;
		cin >> y;
		z = x + y;
		cout << z << "\n";
		return z;
	}
	else if (input == "SUBTRACT")
	{
		cin >> x;
		cin >> y;
		z = x - y;
		cout << z << "\n";
		return z;
	}
	else if (input == "DIVIDE")
	{
		cin >> x;
		cin >> y;
		z = x / y;
		cout << z << "\n";
		return z;
	}
	else if (input == "MULTIPLY")
	{
		cin >> x;
		cin >> y;
		z = x * y;
		cout << z << "\n";
		return z;
	}
	else if (input == "ADDA")
	{
		cin >> x;
		y = input2;
		z = x + y;
		cout << z << "\n";
		return z;
	}
	else if (input == "SUBTRACTA")
	{
		cin >> x;
		y = input2;
		z = y - x;
		cout << z << "\n";
		return z;
	}
	else if (input == "DIVIDEA")
	{
		cin >> x;
		y = input2;
		z = y / x;
		cout << z << "\n";
		return z;
	}
	else if (input == "MULTIPLYA")
	{
		cin >> x;
		y = input2;
		z = x * y;
		cout << z << "\n";
		return z;
	}
	else if (input == "QUIT")
	{
		return 0;
	}
	else {
		cout << "Wrong Command!\n";
		return input2;
	}
}

int counterFunc(const string& input, int input2) {
	
	if (input == "QUIT")
	{	
		cout << "ÃÑ ½ÇÇàµÈ ¸í·É È½¼ö = " << input2 << "\n";
		int output = -1;
		return output;
	}
	else if (input == "ADD" || input == "ADDA" || input == "SUBTRACT" || input == "SUBTRACTA" || input == "DIVIDE" || input == "DEVIDEA" || input == "MULTIPLY" || input == "MULTIPLYA") {
		return input2 + 1;
	}
	else
		return input2;
}
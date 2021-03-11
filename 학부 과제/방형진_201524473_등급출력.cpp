# include <iostream>
# include <string>

using namespace std;
char getGrade(int score);
int main()
{
	string name;
	int score;
	while (true)
	{
		cout << "Enter a name and score: ";
		cin >> name;
		cin >> score;
		if (cin.fail())
		{
			cout << "Wrong score!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
			break;
		}
			
		char grade = getGrade(score);
		if (score < 0 || score > 100)
		{
			cout << "Bye " << name << endl;
			break;
		}
		else
		{
			cout << "Hi " << name << " Your grade is " << grade << endl;
		}
	}
	return 0;
}

char getGrade(int score)
{
	char grade;
	if (score < 60)
	{
		grade = 'F';
	}
	else if (score < 70)
	{
		grade = 'D';
	}
	else if (score < 80)
	{
		grade =  'C';
	}
	else if (score < 90)
	{
		grade =  'B';
	}
	else
	{
		grade =  'A';
	}
	return grade;
}



#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

const int SUBJECT_NO = 3;

struct StudentInfo {
	string name;
	int scores[SUBJECT_NO];
	int sum;
	float average;
};

void printVectorStudentInfo(const vector<struct StudentInfo>& vStudentInfo, int inputStudentCount);

void printStruct(const struct StudentInfo studentInfo);

void printTotal(const vector<struct StudentInfo> &vStudentInfo);

float makeAverage(int score1, int score2, int score3);

int main() {
	int inputStudentCount = 0;
	int totalScore1 = 0;
	int totalScore2 = 0;
	int totalScore3 = 0;
	int totalSum = 0;
	cin >> inputStudentCount;
	vector<struct StudentInfo> vStudentInfo;
	struct StudentInfo studentInfo;
	for (int i = 0; i < inputStudentCount; i++) {
		cin >> studentInfo.name;
		cin >> studentInfo.scores[0];
		totalScore1 += studentInfo.scores[0];
		cin >> studentInfo.scores[1];
		totalScore2 += studentInfo.scores[1];
		cin >> studentInfo.scores[2];
		totalScore3 += studentInfo.scores[2];
		studentInfo.sum = studentInfo.scores[0] + studentInfo.scores[1] + studentInfo.scores[2];
		totalSum += studentInfo.sum;
		studentInfo.average = makeAverage(studentInfo.scores[0], studentInfo.scores[1], studentInfo.scores[2]);
		vStudentInfo.push_back(studentInfo);
	}
	
	printVectorStudentInfo(vStudentInfo,inputStudentCount);
	cout << "Total\t\t" << totalScore1 << "\t" << totalScore2 << "\t" << totalScore3 << "\t" << totalSum << "\n";
}

void printVectorStudentInfo(const vector<struct StudentInfo> &vStudentInfo,int inputStudentCount) {
	int count = 1;
	for (vector<struct StudentInfo>::const_iterator it = vStudentInfo.begin(); it != vStudentInfo.end(); ++it) {
		cout << count << "\t";
		printStruct(*it);
		count ++;
	}
}

void printStruct(const struct StudentInfo studentInfo) {
	cout << studentInfo.name << "\t" ;
	for (int i = 0; i < SUBJECT_NO; i++) {
		cout << studentInfo.scores[i] << "\t";
	}
	cout << studentInfo.sum << "\t" << studentInfo.average << "\n";

}



float makeAverage(int score1, int score2, int score3) {
	return (score1 + score2 + score3) / 3;
}
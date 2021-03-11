#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

typedef struct Rectangle {
	int width;
	int height;
};
Rectangle getRectangle();

enum CommandKind { ADD, SORT, PRINT, CLEAR, EXIT, INVALID };
CommandKind getCommandKind(string commandString);
void print(vector<Rectangle> rectangle);
void rectanglePrint(Rectangle rectangle);
void sort(vector<Rectangle>& rectangle);
const int getSize(Rectangle rectangle);

void main() {
	vector<Rectangle> rectangles;
	while (true) {
		string commandString;
		cin >> commandString;
		const CommandKind command = getCommandKind(commandString);
		switch (command) {
		case ADD: {
			const Rectangle& newRectangle = getRectangle();
			rectangles.push_back(newRectangle);
			break;
		}
		case PRINT: {
			print(rectangles);
			break;
		}
		case SORT: {
			sort(rectangles);
			print(rectangles);
			break;
		}
		case CLEAR: {
			rectangles.clear();
			break;
		}
		case EXIT: {
			break;
		}
		default: {
			assert(false);
			break;
		}
		}
		if (command == EXIT)
			break;
	}
}

CommandKind getCommandKind(string commandString) {
	transform(commandString.begin(), commandString.end(), commandString.begin(), toupper);
	if (commandString == "ADD") {
		return ADD;
	}
	else if (commandString == "SORT") {
		return SORT;
	}
	else if (commandString == "PRINT") {
		return PRINT;
	}
	else if (commandString == "CLEAR") {
		return CLEAR;
	}
	else if (commandString == "EXIT") {
		return EXIT;
	}
	else {
		return INVALID;
	}
}

Rectangle getRectangle() {
	Rectangle makeRectangle;
	cin >> makeRectangle.width;
	cin >> makeRectangle.height;
	return makeRectangle;
}

void print(vector<Rectangle> rectangle) {
	const vector<Rectangle> input = rectangle;
	cout << "Rectangle Count: " << input.size() << "\n";
	for (vector<Rectangle>::const_iterator it = input.cbegin(); it != input.cend(); ++it) {
		rectanglePrint(*it);
	}
}

void rectanglePrint(const Rectangle rectangle) {
	cout << rectangle.width << " " << rectangle.height << " " << getSize(rectangle) << "\n";
}

void sort(vector<Rectangle>& rectangle) {
	for (vector<Rectangle>::iterator it = rectangle.begin(); it != rectangle.end(); ++it) {
		for (vector<Rectangle>::iterator it2 = rectangle.begin(); it2 != rectangle.end(); ++it2) {
			if (getSize(*it) < getSize(*it2)) {
				swap(*it, *it2);
			}
		}
	}
}

void swap(vector<Rectangle>::iterator it, vector<Rectangle>::iterator it2) {
	Rectangle temp = *it;
	*it = *it2;
	*it2 = temp;
}

const int getSize(Rectangle rectangle) {
	return rectangle.width * rectangle.height;
}
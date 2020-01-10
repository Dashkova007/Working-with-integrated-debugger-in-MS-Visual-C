#include <iostream>
#include <windows.h>
using namespace std;

//инициализация функций, которые находяться в другом файле
void first();
void second();

void main() {
	int value;
	string  arr[] = {
		"Task 1. Display the figure filled with asterisks.",
		"Task 2. The user and the computer take turns to roll 2 dice. The winner is the one who has more than the result of 3 rolls. Provide a beautiful game interface."
	};
	for (int i = 0; i < 2; i++) cout << arr[i] << "\n\n";
	cout << "Choose a task = ";
	cin >> value;
	system("cls");
	switch (value) {
	case 1: first();  break;
	case 2: second(); break;
	default: break;
	}
	system("pause");
}

//#include "stdafx.h";
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int main() {

	//Check if user enters valid input
	cout << "Enter a number: " << endl;
	int x;
	cin >> x;
	while (cin.fail()) {
		cout << "Invalid input" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> x;
	}
	cout << "Input number: " << x << endl;

	//Get random number
	srand(time(NULL));
	int y = rand() % 100 + 1;
	cout << "Random: " << y << endl;

	//check if string contains digit
	string str1 = "Hello123";
	for (int i = 0; i < str1.length(); i++) {
		if (isdigit(str1[i])) {
			cout << "String contains a digit" << endl;
			break;
		}
	}

	//upper case
	for (int i = 0; i < str1.length(); i++) {
		str1[i] = toupper(str1[i]);
	}
	cout << str1 << endl;

	//string comparison
	string str2 = "Code";
	string str3 = "Lab";
	if (str2.compare(str3) == 0) {
		cout << "Strings are the same" << endl;
	}
	else {
		cout << "Strings are not the same" << endl;
	}

	//string comparison alternative
	if (str2 == str3) {
		cout << "Strings are the same" << endl;
	}
	else {
		cout << "Strings are not the same" << endl;
	}
	//system("pause");
	return 0;
}

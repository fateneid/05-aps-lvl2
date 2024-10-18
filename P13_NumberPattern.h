#pragma once

#include <iostream>
using namespace std;

namespace P13_NumberPattern {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void PrintNumberPattern(int Number) {
		for (int i = 1; i <= Number; i++) {
			for (int j = 1; j <= i; j++) {
				cout << i;
			}
			cout << endl;
		}
	}

	void Task()
	{

		PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));

	}

}


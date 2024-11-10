#pragma once
#include <iostream>
using namespace std;

namespace Read_A_Positive_Number {
	int Read_A_Positive_Number(string Text) {
		int Number;
		do
		{
			cout << Text << endl;
			cin >> Number;

		} while (Number < 0);
		return Number;
	}

}
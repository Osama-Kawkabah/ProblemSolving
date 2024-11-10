#pragma once

#include <iostream>
using namespace std;

namespace Swap_Numbers {

	void Swap_Number(int& A, int& B) {
		int Temp;
		Temp = A;
		A = B;
		B = Temp;
		cout << "A-> " << A << "\n" << "B-> " << B << endl;
	}

}
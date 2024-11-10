#pragma once
#include <iostream>
using namespace std;

namespace Random_Numbers {

	int Random_Number(int From, int To) {

		int Number;
		return Number = (rand() % (To - From + 1)) + From;
	}



}
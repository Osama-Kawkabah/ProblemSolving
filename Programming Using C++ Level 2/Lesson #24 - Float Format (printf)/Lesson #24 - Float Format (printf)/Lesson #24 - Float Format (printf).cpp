#include <iostream>
using namespace std;



int main()
{

	double X1 = 3.0;
	double Y2 = 12.0;


	printf("The Number Is %.*f\n", 2, X1);
	printf("The Number Is %.*f\n",4, X1);
	printf("The Number Is %.3f\n", Y2);



	float X = 70, Y = 9.0;
	printf("The Number Is %.3f + %.3f = %.3f ", X, Y, X / Y);



	return 0;
}

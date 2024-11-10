#include <iostream>
using namespace std;



int MYsum(int a, int b, int c, int d) {
	return (a + b + c + d);
};
int MYsum(int a, int b) {
	return (a + b);
};
int MYsum(int a, int b, int c, int d, int f, int g) {
	return (a + b + c + d + f + g);
};
int MYsum(int a, int b, int c, int d, int f) {
	return (a + b + c + d + f );
};
float MYsum(float a, float b, float c) {
	return (a + b + c);
};

int main() {
	int a = 12, b = 4, c = 44, d = 2, f = 76, g = 43;
	cout << MYsum(a, b, c, d, f) << endl;
	cout << MYsum(a, b, c,f) << endl;
	cout << MYsum(a, b);
	cout << MYsum(21.3, 13.2, 13.9);

	return 0;
}
#include <iostream>
#include <string>
using namespace std;


void PrintFromAtoZ() {

	for (char i = 65; i <= 90; i++) {
		for (char t = 65; t <= 90; t++) {
			for (char j = 65; j <= 90; j++) {
				for (char x = 65; x <= 90; x++) {
					for (char z = 65; z <= 90; z++) {

						for (char f = 65; f <= 90; f++) {
							cout << i << j << t << x << z << f << endl;

						}
					}

				}
			}
		}
	};


}


int main() {
	PrintFromAtoZ();
}
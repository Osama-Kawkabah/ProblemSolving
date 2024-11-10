#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vBox;

	vBox.push_back(10);
	vBox.push_back(20);
	vBox.push_back(30);
	vBox.push_back(40);
	vBox.push_back(50);
	vBox.push_back(60);
	vBox.push_back(70);
	vBox.push_back(80);
	vBox.push_back(90);
	vBox.push_back(100);
	cout << "Size : " << vBox.size() << endl;
	cout << "capacity : " << vBox.capacity() << endl;
	vBox.pop_back();
	vBox.pop_back();
	vBox.pop_back();
	vBox.pop_back();
	vBox.pop_back();
	cout << "Size : " << vBox.size() << endl;


	vBox.clear();
	cout << "Size : " << vBox.size() << endl;

	
	for (auto& box : vBox)
	{
		cout << box << endl;
	}


	return 0;
}

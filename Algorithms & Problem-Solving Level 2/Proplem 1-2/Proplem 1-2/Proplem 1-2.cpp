#include <iostream>
using namespace std;


int Count = 12;

void Print_Titel_Multipliaction_Table() {
	cout << "\n\n" << endl;
	cout << "\t\t\t\t\tMulte Aplcation Table From 1 To " << Count << "\n\n" << endl;
};

void Print_Haed_Multipliaction_Table() {
	Print_Titel_Multipliaction_Table();
	cout << "\t";
	for (int i = 1; i <= Count; i++)
	{
		cout << "\t" << i;
	}

		cout << "\n___________________________________________________________________________________________________________\n";

};


void Print_Multipliaction_Table() {
	Print_Haed_Multipliaction_Table();
	for (int Num = 1; Num <= Count; Num++)
	{
		if (Num <= 9)
		{
			cout <<"  " << Num << "  =>\t|";
		}
		else {
			cout <<"  " << Num << " =>\t|";

		};

		for (int K = 1; K <= Count; K++)
		{
			cout <<"\t" << K * Num;
		}
		cout << "\n";
	}

};


int main()
{

	Print_Multipliaction_Table();


	return 0;
}


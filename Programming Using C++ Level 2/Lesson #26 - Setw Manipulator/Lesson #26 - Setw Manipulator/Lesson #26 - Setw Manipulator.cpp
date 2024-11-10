#include <iostream>
#include <iomanip>
using namespace std;

int main() {


	cout << "--------------------------------------------------------------------------" << endl;
	cout << "| \tName\t|\tLast Name\t|\t Full Name\t|   Mark |"<< endl;
	cout << "--------------------------------------------------------------------------" << endl;

	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Ali" << setw(9) 
		 << "|" << setw(16) << "Kokabah" << setw(8) << "|" <<setw(8)<<"90"<<"|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9) 
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "90" << "|" << endl;
	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Eahya" << setw(9)
		 << "|" << setw(16) << "Mahmod" << setw(8) << "|" << setw(8) << "30" << "|" << endl;
	cout << "|" << setw(12) << "Ahmed" << setw(4) << "|" << setw(15) << "Haseen" << setw(9)
		 << "|" << setw(16) << "Ali" << setw(8) << "|" << setw(8) << "44" << "|" << endl;
	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Eahya" << setw(9)
	   	 << "|" << setw(16) << "Mahmod" << setw(8) << "|" << setw(8) << "74" << "|" << endl;
	cout << "|" << setw(12) << "Yahya" << setw(4) << "|" << setw(15) << "Ahamed" << setw(9)
		 << "|" << setw(16) << "Haseen" << setw(8) << "|" << setw(8) << "56" << "|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9)
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "20" << "|" << endl;
	cout << "|" << setw(12) << "Ahmed" << setw(4) << "|" << setw(15) << "Haseen" << setw(9)
		 << "|" << setw(16) << "Ali" << setw(8) << "|" << setw(8) << "70" << "|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9)
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "56" << "|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9)
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "67" << "|" << endl;
	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Ali" << setw(9)
		 << "|" << setw(16) << "Kokabah" << setw(8) << "|" << setw(8) << "23" << "|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9) 
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "27" << "|" << endl;
	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Eahya" << setw(9)
		 << "|" << setw(16) << "Mahmod" << setw(8) << "|" << setw(8) << "56" << "|" << endl;
	cout << "|" << setw(12) << "Ahmed" << setw(4) << "|" << setw(15) << "Haseen" << setw(9)
		 << "|" << setw(16) << "Ali" << setw(8) << "|" << setw(8) << "87" << "|" << endl;
	cout << "|" << setw(12) << "Osama" << setw(4) << "|" << setw(15) << "Eahya" << setw(9)
		 << "|" << setw(16) << "Mahmod" << setw(8) << "|" << setw(8) << "89" << "|" << endl;
	cout << "|" << setw(12) << "Yahya" << setw(4) << "|" << setw(15) << "Ahamed" << setw(9)
		 << "|" << setw(16) << "Haseen" << setw(8) << "|" << setw(8) << "56" << "|" << endl;;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9)
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "64" << "|" << endl;
	cout << "|" << setw(12) << "Ahmed" << setw(4) << "|" << setw(15) << "Haseen" << setw(9)
		 << "|" << setw(16) << "Ali" << setw(8) << "|" << setw(8) << "35" << "|" << endl;
	cout << "|" << setw(12) << "Ali" << setw(4) << "|" << setw(15) << "Saleh" << setw(9)
		 << "|" << setw(16) << "Mohammed" << setw(8) << "|" << setw(8) << "63" << "|" << endl;
	cout << "--------------------------------------------------------------------------" << endl;


	cout << "-------------------------------2------------------------------------------" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
		cout << "| \tName\t|\tLast Name\t|\t Full Name\t|   Mark |" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		int le = 90;
	for (int i = 65; i < 90; i++)
	{

		cout << "|" << setw(8) << char(i)<<" "<< char(le--)<< char(i) << " " << char(le--) << setw(3) << "|" << setw(15) << "Ali" << setw(9)
			<< "|" << setw(16) << char(i)<< char(i) << setw(7) << "|" << setw(8) << le-- << "|" << endl;
	}

	return 0;
}
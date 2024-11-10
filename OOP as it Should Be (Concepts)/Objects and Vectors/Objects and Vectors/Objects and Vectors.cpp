#include<iostream> // ����� ����� ������� ��������
#include<vector>   // ����� ����� ��������

using namespace std; // ������� ����� ������� std

class clsA // ����� ������ clsA
{
public:
	// Constructor ������
	clsA(int value)
	{
		x = value; // ����� ���� ������� ������� ������
	}

	int x; // ����� ����� ����

	void Print() // ����� ���� ������ ���� �������
	{
		cout << "The value of x=" << x << endl; // ����� ���� �������
	}

};


int main()

{

	vector <clsA> v1; // ����� ������ �� ������ clsA
	short NumberOfObjects = 13; // ����� ��� ��������

	// ����� ������ �� ����� ��������
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1.push_back(clsA(i+1)); // ����� ���� �� ������ clsA ��� ����� ��������
	}

	// ����� ����� ������
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print(); // ����� ����� ������ �� ������ i
	}

	system("pause>0"); // ����� ��������

}

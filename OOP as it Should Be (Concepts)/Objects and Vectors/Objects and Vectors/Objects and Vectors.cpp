#include<iostream> // ÊÖãíä ãßÊÈÉ ÇáÅÏÎÇá æÇáÅÎÑÇÌ
#include<vector>   // ÊÖãíä ãßÊÈÉ ÇáİíßÊæÑ

using namespace std; // ÇÓÊÎÏÇã ãÓÇÍÉ ÇáÃÓãÇÁ std

class clsA // ÊÚÑíİ ÇáßáÇÓ clsA
{
public:
	// Constructor ÇáãÚáã
	clsA(int value)
	{
		x = value; // ÊÚííä ŞíãÉ ÇáãÚÇãá ááãÊÛíÑ ÇáÚÖæí
	}

	int x; // ÊÚÑíİ ãÊÛíÑ ÚÖæí

	void Print() // ÊÚÑíİ ÏÇáÉ áØÈÇÚÉ ŞíãÉ ÇáãÊÛíÑ
	{
		cout << "The value of x=" << x << endl; // ØÈÇÚÉ ŞíãÉ ÇáãÊÛíÑ
	}

};


int main()

{

	vector <clsA> v1; // ÅäÔÇÁ İíßÊæÑ ãä ÇáßáÇÓ clsA
	short NumberOfObjects = 13; // ÊÚÑíİ ÚÏÏ ÇáßÇÆäÇÊ

	// ÅÏÑÇÌ ÇáßÇÆä İí äåÇíÉ ÇáİíßÊæÑ
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1.push_back(clsA(i+1)); // ÅÖÇİÉ ßÇÆä ãä ÇáßáÇÓ clsA Åáì äåÇíÉ ÇáİíßÊæÑ
	}

	// ØÈÇÚÉ ãÍÊæì ÇáßÇÆä
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print(); // ØÈÇÚÉ ãÍÊæì ÇáßÇÆä İí ÇáãæÖÚ i
	}

	system("pause>0"); // ÅíŞÇİ ÇáÈÑäÇãÌ

}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct sMyInf {
	string First_Name;
	string Last_Name;
	string Full_Name;
	string Nick_Name;
	float Salary;
	vector <string> Skill;
};

sMyInf ReadInfr(vector < sMyInf>& InformationAll) {

	sMyInf sInform;
	cout << "Please Your First_Name : ";
	cin >> sInform.First_Name;
	cout << "Please Your Last_Name  : ";
	cin >> sInform.Last_Name;
    cin.ignore();
	cout << "Please Your Full_Name  : ";
	getline(cin, sInform.Full_Name);
	cout << "Please Your Nick_Name  : ";
	cin >> sInform.Nick_Name;
	cout << "Please Your Salary     : ";
	cin >> sInform.Salary;
	InformationAll.push_back(sInform);

	return sInform;
}

void PrintInf(vector < sMyInf>& InformationAll) {
	char LetterMore = 'Y';
	while (LetterMore == 'Y' || LetterMore == 'y')
	{
		ReadInfr(InformationAll);

		cout << "Do You Want Read More Information :Y/N ";
		cin >> LetterMore;
	};

	cout << "\n";
	for (sMyInf& Info : InformationAll)
	{
		cout << "First_Name : " << Info.First_Name << endl;
		cout << "Last_Name  : " << Info.Last_Name << endl;
		cout << "Full_Name  : " << Info.Full_Name << endl;
		cout << "Nick_Name  : " << Info.Nick_Name << endl;
		cout << "Salary     : " << Info.Salary << endl;
		cout << endl;
	}
}

int main() {

/*
	 std::vector<T> vector_name
	vector < sMyInf> Information;

	sMyInf sMyInform;

	sMyInform.First_Name = "Osama";
	sMyInform.Last_Name = "Kokabah";
	sMyInform.Full_Name = "Osama Ali Kokabah";
	sMyInform.Nick_Name = "Asom";
	sMyInform.Salary = "23500";
	sMyInform.Skill = { "Html","Css","Js","Php","Mysql","NodeJs","ReactJs","Bootstrap" };
	Information.push_back(sMyInform);

	sMyInform.First_Name = "Ali";
	sMyInform.Last_Name = "Mostafa";
	sMyInform.Full_Name = "Ali Mohammed Mostafa";
	sMyInform.Nick_Name = "Ali";
	sMyInform.Salary = "13500";
	sMyInform.Skill = { "Html","Css","Js","Php","Mysql" };
	Information.push_back(sMyInform);

	sMyInform.First_Name = "Mohammed";
	sMyInform.Last_Name = "Haseen";
	sMyInform.Full_Name = "Mohammed Ali Haseen";
	sMyInform.Nick_Name = "Mamoud";
	sMyInform.Salary = "16500";
	sMyInform.Skill = { "Html","Css","Js","Php","Mysql","NodeJs","ReactJs" };
	Information.push_back(sMyInform);


	for (sMyInf& MyInf : Information)
	{
		cout << "First_Name : " << MyInf.First_Name << endl;
		cout << "Last_Name  : " << MyInf.Last_Name << endl;
		cout << "Full_Name  : " << MyInf.Full_Name << endl;
		cout << "Nick_Name  : " << MyInf.Nick_Name << endl;
		cout << "Salary     : " << MyInf.Salary << endl;
		cout << "Skills     : ";

		for (size_t i = 0; i < MyInf.Skill.size(); ++i)
		{
			cout << MyInf.Skill[i];

			if (i != MyInf.Skill.size() - 1) {
				cout << ", ";
			}
		}
		cout << endl;
		}
	*/

	//HomeWork

	vector < sMyInf> InformationAll;
	PrintInf(InformationAll);

	return 0;
}

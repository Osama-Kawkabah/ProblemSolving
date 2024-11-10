#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector <int > Number{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
    for (const int& i : Number) {

        cout << "The Number Is : " << i << endl;
    }

    for (int i = 0; i < Number.size(); i++)
    {
        //cout << " The Number In The Index  Number.at(i) : " << Number.at(i) << endl;
        //cout << " The Number In The Index Number[i] : " << Number[i] << endl;


        Number.at(i) = Number.size() - i;

        cout << " The Number In The Index  Number.at(i) : " << Number.at(i) << endl;
    }


    
    return 0;
}


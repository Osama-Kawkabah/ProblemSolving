#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector <int> Number{ 1,2,3,4,5,6,7,8,9 };

    
    vector <int>::iterator Num;

    for (Num = Number.begin(); Num != Number.end(); Num++)
    {
        cout << *Num << " ";
    }


    //------------------------------------------------

    cout << "\n";
    for (Num = Number.begin(); Num != Number.end(); Num++)
    {
        cout << "Please enter  the element that you want change instead of : " << *Num << endl;
        cin >> *Num;
    }
    for (Num = Number.begin(); Num != Number.end(); Num++)
    {
        cout << *Num << endl;
    }

    return 0;
}

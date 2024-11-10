#include <iostream>
#include "clsPeriod.h"

int main()

{

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    cout << "\n";

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));

    // ØÈÇÚÉ ÊæÇÑíÎ ÈÏÇíÉ æäåÇíÉ ÇáÝÊÑÊíä
    cout << "Period 1:" << endl;
    Period1.Print();

    cout << endl;

    cout << "Period 2:" << endl;
    Period2.Print();


    //You can check like this
    cout << Period1.IsOverLapWith(Period2) << endl;


    return 0;
}
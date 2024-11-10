#include <iostream>
#include "clsString.h"

using namespace std;

int main()

{
    clsString String1;

    String1.Value = "  Osama Ali Yahya Haseen Kokabah  ";

    cout <<"\nMy Text : "<< String1.Value <<"\n\n";
    cout << "Number of words: " << String1.CountWords() << endl;
  
    cout << "\nFirst Letter Of Each Word: " << String1.PrintFirstLetterOfEachWord() << endl;

    cout << "\nLower First Letter Of Each Word: " << String1.LowerFirstLetterOfEachWord() << endl;

    cout << "\nUpper First Letter Of Each Word: " << String1.UpperFirstLetterOfEachWord() << endl;

    cout << "\nTrim Left: " << String1.TrimLeft() << endl;

    cout << "\nTrim Right: " << String1.TrimRight() << endl;

    cout << "\nInvert Letter String: " << String1.InvertLetterstring() << endl;

    cout << "\nChain length: " << String1.Chainlength() << endl;



    system("pause>0");
    return 0;
};


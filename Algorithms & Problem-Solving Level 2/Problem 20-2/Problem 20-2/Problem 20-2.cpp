#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum MyLetters
{
    SmallLiters = 1,
    CapitelLiters = 2,
    SpatialLiters = 3,
    Diget = 4,
};

int ReadNumberRandom(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

char CheckInputIsWhat(MyLetters Letters)
{
    switch (Letters)
    {
    case MyLetters::CapitelLiters:
    {
        return char(ReadNumberRandom(65, 90));
        break;
    }
    case MyLetters::SmallLiters:
    {
        return char(ReadNumberRandom(97, 122));
        break;
    }
    case MyLetters::SpatialLiters:
    {
        return char(ReadNumberRandom(33, 47));
        break;
    }
    case MyLetters::Diget:
    {
        return char(ReadNumberRandom(48, 57));
        break;
    }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Capitel Liters: " << CheckInputIsWhat(MyLetters::CapitelLiters) << endl;
    cout << "Small Liters: " << CheckInputIsWhat(MyLetters::SmallLiters) << endl;
    cout << "Spatial Liters: " << CheckInputIsWhat(MyLetters::SpatialLiters) << endl;
    cout << "Diget: " << CheckInputIsWhat(MyLetters::Diget) << endl;

    return 0;
}
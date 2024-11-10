//#include<iostream>
//using namespace std;
//void AddArrayElement(int Number, int arr[], int& arrLength)
//{
//	//its a new element so we need to add the length by 1
//	arrLength++;
//	arr[arrLength - 1] = Number;
//}
//
//void CopyPrimNumber(int arrSource[], int arrDestination[], int arrLength, int& arrDestinationLength) {
//	for (int i = 0; i < arrLength; i++)
//	{
//		if (arrSource[i] != arrSource[i+1])
//		{
//			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
//		}
//	}
//}
//
//void PrintArray(int arr[], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
//
//int main()
//{
//	const int Length = 10, LenghtArray = Length;
//	int Array[Length] = { 10, 10, 10, 50, 50, 70, 70, 70, 70, 90 };
//	int Array2[Length], Length2 = 0;
//
//
//	CopyPrimNumber(Array, Array2, LenghtArray, Length2);
//	PrintArray(Array, LenghtArray);
//	PrintArray(Array2, Length2);
//	
//	return 0;
//}


#include<iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 100;
    arr[3] = 100;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
        {
            return i;
        }
    }
    return -1; // ÅÐÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚäÕÑ
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arr[arrLength] = Number;
    arrLength++;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

int main()
{
    int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;
    FillArray(arrSource, SourceLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arrSource, SourceLength);
    CopyDistinctNumbersToArray(arrSource, arrDestination, SourceLength, DestinationLength);
    cout << "\nArray 2 distinct elements:\n";
    PrintArray(arrDestination, DestinationLength);
    return 0;
}
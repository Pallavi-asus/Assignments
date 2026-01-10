////////////////////////////////////////////////////////////
//
//  File name :     53.4.cpp
//  Description :   This program finds the second minimum
//                  element from an array using function
//                  templates
//  Author :        Pallavi Sable
//  Date :          10/01/2026
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : SecondMin
//  Description   : Returns the second minimum element
//                  from the given array using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Pallavi Sable
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];
    T sMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < sMin && Arr[iCnt] > Min)
        {
            sMin = Arr[iCnt];
        }
    }

    return sMin;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    cout << SecondMin(Arr, 5);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}
//  Output: 20
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  File name :     53.3.cpp
//  Description :   This program finds the second maximum
//                  element from an array using function
//                  templates
//  Author :        Pallavi Sable
//  Date :          10/01/26
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
//  Function Name : SecondMax
//  Description   : Returns the second maximum element
//                  from the given array using templates
//  Input         : T Arr[], int iSize
//  Output        : T
//  Author        : Pallavi Sable
//  Date          : 10/01/26
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
T SecondMax(T *Arr, int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];
    T sMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > sMax && arr[iCnt] < Max)
        {
            sMax = Arr[iCnt];
        }
    }

    return sMax;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    cout << SecondMax(Arr, 5);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}
//  Output: 40
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  File name :     53.5.cpp
//  Description :   This program replaces all occurrences
//                  of a specific value in an array with
//                  another value using function templates
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
//  Function Name : Replace
//  Description   : Replaces all occurrences of old value
//                  with new value in the given array
//                  using templates
//  Input         : T Arr[], int iSize, T oldVal, T newVal
//  Output        : void
//  Author        : Pallavi Sable
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
void Replace(T *Arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == oldVal)
        {
            Arr[iCnt] = newVal;
        }
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int arr[] = {10, 20, 30, 20, 40, 20};

    Replace(arr, 6, 20, 99);

    for(iCnt = 0; iCnt < 6; iCnt++)
    {
        cout << arr[iCnt] << "\t";
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,20,40,20}, old = 20, new = 99
//  Output: {10,99,30,99,40,99}
//
////////////////////////////////////////////////////////////

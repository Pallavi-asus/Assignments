////////////////////////////////////////////////////////////
//
//  File name :     53.2.cpp
//  Description :   This program checks whether the given
//                  array is sorted in ascending order
//                  using function templates
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
//  Function Name : CheckSorted
//  Description   : Checks whether the given array
//                  is sorted in ascending order
//                  using templates
//  Input         : T Arr[], int iSize
//  Output        : bool
//  Author        : Pallavi Sable
//  Date          : 10/01/2026
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])
        {
            return false;
        }
    }

    return true;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    if(CheckSorted(Arr, 5))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}
//  Output: Array is sorted
//
////////////////////////////////////////////////////////////

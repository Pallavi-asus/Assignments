////////////////////////////////////////////////////////////
//
//  File name :     53.1.cpp
//  Description :   This program copies elements from one
//                  array to another using function templates
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
//  Function Name : CopyArray
//  Description   : Copies elements from source array
//                  to destination array using templates
//  Input         : T Src[], T Dest[], int iSize
//  Output        : void
//  Author        : Pallavi Sable
//  Date          : 10/01/26
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

template <class T>
void CopyArray(T *Src, T *Dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Dest[iCnt] = Src[iCnt];
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int Brr[5];
    int iCnt = 0;

    CopyArray(Arr, Brr, 5);

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << Brr[iCnt] << "\t";
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : {10,20,30,40,50}
//  Output: {10,20,30,40,50}
//
////////////////////////////////////////////////////////////

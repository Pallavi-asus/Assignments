////////////////////////////////////////////////////////////
//
//  File name :     26.3.c
//  Description :   This program displays numbers from 1 to
//                  the entered value, each followed by '*'
//  Author :        Pallavi Sable
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*  INPUT  : 5
    OUTPUT : 1  *   2   *   3   *   4   *   5   *
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    Displays numbers from 1 to iNo,
//                   each separated by '*'
//  Input :          Integer
//  Output :         Void
//  Author :         Pallavi Sable
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t", iCnt);
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number of elements you want to display:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
// End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 1
//  Output : 
//           1  *
//
//  ---------------------------------------------
//
//  Input : 3
//  Output : 
//           1  *   2  *   3  *
//
//  ---------------------------------------------
//
//  Input : 5
//  Output : 
//           1  *   2  *   3  *   4  *   5  *
//
//  ---------------------------------------------
//
//  Input : 7
//  Output : 
//           1  *   2  *   3  *   4  *   5  *   6  *   7  *
//
//  ---------------------------------------------
//
//  Input : 0
//  Output : 
//           (No output)
//
//  ---------------------------------------------
//
//  Input : -4
//  Output : 
//           (No output)
//
//
////////////////////////////////////////////////////////////

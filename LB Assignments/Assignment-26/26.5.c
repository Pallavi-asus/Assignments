////////////////////////////////////////////////////////////
//
//  File name :     26.5.c
//  Description :   This program displays first 'iNo' even 
//                  numbers (2, 4, 6, ...)
//  Author :        Pallavi Sable
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*  INPUT  : 5
    OUTPUT : 2   4   6   8   10
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
//  Description :    Displays the first iNo even numbers
//  Input :          Integer
//  Output :         Void
//  Author :         Pallavi Sable
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (2 * iNo); iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
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
//           2
//
//  ---------------------------------------------
//
//  Input : 3
//  Output : 
//           2   4   6
//
//  ---------------------------------------------
//
//  Input : 5
//  Output : 
//           2   4   6   8   10
//
//  ---------------------------------------------
//
//  Input : 7
//  Output : 
//           2   4   6   8   10   12   14
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

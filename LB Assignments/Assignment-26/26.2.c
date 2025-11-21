////////////////////////////////////////////////////////////
//
//  File name :     26.2.c
//  Description :   This program displays numbers in reverse
//                  order along with '#' symbol.
//  Author :        Pallavi Sable
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*  INPUT  : 5
    OUTPUT : 5  #   4   #   3   #   2   #   1
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
//  Description :    Displays numbers in reverse order
//                   separated by '#'
//  Input :          Integer
//  Output :         Void
//  Author :         Pallavi Sable
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t #\t", iCnt);
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
//           1 #
//
//  ---------------------------------------------
//
//  Input : 3
//  Output : 
//           3 #   2 #   1 #
//
//  ---------------------------------------------
//
//  Input : 5
//  Output : 
//           5 #   4 #   3 #   2 #   1 #
//
//  ---------------------------------------------
//
//  Input : 10
//  Output : 
//           10 #  9 #  8 #  7 #  6 #  5 #  4 #  3 #  2 #  1 #
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

////////////////////////////////////////////////////////////
//
//  File name :     26.1.c
//  Description :   This program displays alphabets from A
//                  up to the number of elements entered
//                  by the user (A, B, C, ...)
//  Author :        Pallavi Sable
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*  INPUT  : 5
    OUTPUT : A  B  C  D  E
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
//  Description :    Displays alphabets starting from 'A'
//                   according to the given number
//  Input :          Integer
//  Output :         Void
//  Author :         Pallavi Sable
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt);
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
}// End of main
////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 1
//  Output : 
//           A
//  Input : 3
//  Output : 
//           A  B  C
//  Input : 5
//  Output : 
//           A  B  C  D  E
//  Input : 10
//  Output : 
//           A  B  C  D  E  F  G  H  I  J
//  Input : 0
//  Output : 
//           (No output)
//
//  Input : -4
//  Output : 
//           (No output)
//
//
////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  File name  : 8.4.c
//  Description: Accept Number from user and Display
//               its table
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

void DisplayTable(iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("You Table is \n");
    for(iCnt = 1 ; iCnt <= 10; iCnt++)
    {
        iMult = iCnt * iNo;
        printf("%d\n",iMult);
    }

}
int main()
{
    int iValue1 = 0;
    
    printf("Enter  Your Number\n");
    scanf("%d",&iValue1);

    DisplayTable(iValue1);

    
    return 0;

}
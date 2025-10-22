///////////////////////////////////////////////////////
//
//  File name  : 13.3.c
//  Description: Accept number from user and print odd 
//               number till that number on screen
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Print_Odd_Number(int ilimit)
{
    if(ilimit <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iLimit = 0;

    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    Print_Odd_Number(iLimit);
    return 0;
}
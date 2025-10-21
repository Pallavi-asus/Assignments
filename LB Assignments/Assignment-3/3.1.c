///////////////////////////////////////////////////////
//
//  File name  : 3.1.c
//  Description: Accept number from user and print 
//               that number of even numbers of screen
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void PrintEven(int iNo1)
{
    if(iNo1 <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo1 ; iCnt++ )
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0;


    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    PrintEven(iValue1);


    return 0;
}
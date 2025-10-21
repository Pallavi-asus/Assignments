///////////////////////////////////////////////////////
//
//  File name  : 3.3.c
//  Description: Accept number from user and print 
//               Even factors of that number
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}
int main()
{
    int iValue = 0;


    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);


    return 0;
}
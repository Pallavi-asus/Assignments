///////////////////////////////////////////////////////
//
//  File name  : 4.3.c
//  Description: Accept number from user and print 
//               non - factors of that number
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void DisplayNonFactor(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        if((iNo%iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);


    return 0;
}
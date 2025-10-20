///////////////////////////////////////////////////////
//
//  File name  : 2.2.c
//  Description: Accept two numbers from user and 
//               Display first number in second number
//               of times
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo,int iFrequnecy)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iFrequnecy < 0)
    {
        iFrequnecy = -iFrequnecy;
    }

    for(iCnt = 1 ; iCnt <= iFrequnecy ; iCnt++)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
    int iValue1 = 0;
    int iCount = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    printf("Enter Your Number\n");
    scanf("%d",&iCount);

    Display(iValue1,iCount);
   
    return 0;
}
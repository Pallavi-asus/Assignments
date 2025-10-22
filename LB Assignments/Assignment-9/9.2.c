///////////////////////////////////////////////////////
//
//  File name  : 9.2.c
//  Description: Convert USD to INR
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int USDtoINR(iNo)
{
    int iINR = 0;
    iINR = 70 * iNo; 
    return iINR;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter USD\n");
    scanf("%d",&iValue);

    iRet = USDtoINR(iValue);

    printf("%d Dollars is %d INR",iValue,iRet);
   
    return 0;
}
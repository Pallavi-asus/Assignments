///////////////////////////////////////////////////////
//
//  File name  : 9.5.c
//  Description: Accept Number from user and return 
//               its difference btween even and odd 
//               factorial
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iFact1 = 0;
    int iFact2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iFact1 = 1;
    iFact2 = 1;
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return (iFact1 - iFact2);
}
int main()
{
    int iValue1 = 0;
    int iRet = 0;
    printf("Enter  Your Number\n");
    scanf("%d",&iValue1);

    iRet = DiffFactorial(iValue1);

    printf("Diffrence between even and Odd Factorial of %d is %d",iValue1,iRet);
    return 0;

}
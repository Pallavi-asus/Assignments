///////////////////////////////////////////////////////
//
//  File name  : 9.3.c
//  Description: Accept Number from user and find its
//               Odd factorial
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iFact = 1;
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue1 = 0;
    int iRet = 0;
    printf("Enter  Your Number\n");
    scanf("%d",&iValue1);

    iRet = OddFactorial(iValue1);

    printf("Factorial of %d is %d",iValue1,iRet);
    return 0;

}
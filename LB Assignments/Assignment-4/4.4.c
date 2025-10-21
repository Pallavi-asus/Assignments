///////////////////////////////////////////////////////
//
//  File name  : 4.4.c
//  Description: Accept number from user and Display
//               Sum of its Non-Factors
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }

    int iCnt = 0;
    int iSum = 0;   

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Sum of Non-Factors is %d\n", iRet);

    return 0;
}

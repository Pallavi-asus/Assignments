///////////////////////////////////////////////////////
//
//  File name  : 4.4.c
//  Description: Accept number from user and Display
//               Difference between Summation of
//               all its factors and Non-Factors
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }

    int iCnt = 0;
    int iSum1 = 0;  
    int iSum2 = 0;  

    for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Summation of all its factors and Non-Factors is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////
//
//  File name  : 2.5.c
//  Description: Accept number from user and check
//               whether the number is even or odd
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo1)
{
    
    if((iNo1 % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0;

    bool bRet = false;

    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    bRet = CheckDivisible(iValue1);

    if(bRet == true)
    {
        printf("%d is an even number",iValue1);
    }
    else
    {
        printf("%d is an odd Number",iValue1);
    }

    return 0;
}
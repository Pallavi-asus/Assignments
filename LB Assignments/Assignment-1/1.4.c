///////////////////////////////////////////////////////
//
//  File name  : 1.4.c
//  Description: Accept number from user and check
//               whether the number is divisible by 
//               5 or not
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo1)
{
    if((iNo1 % 5) == 0)
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
    int iValue2 = 0;

    bool bRet = false;

    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    bRet = CheckDivisible(iValue1);

    if(bRet == true)
    {
        printf("%d is Divisible by 5",iValue1);
    }
    else
    {
        printf("%d is not Divisible by  5",iValue1);
    }

    return 0;
}
///////////////////////////////////////////////////////
//
//  File name  : 12.5.c
//  Description: Accept number from user and check
//               if its Divisible by 5
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo % 5) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
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
        printf("It is Divisble by 5");
    }
    else
    {
        printf("It is not Divisble by 5");
    }


    return 0;
}
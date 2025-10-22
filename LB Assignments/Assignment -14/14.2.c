////////////////////////////////////////////////////////////
//
//  File name :     14.2.c
//  Description :   Accept Number from user and Check if
//                  it contains zero in it or not
//  Author :        Pallavi Sable
//  Date :          22/10/2025
//
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0
bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return True;
        }

        iNo = iNo / 10;
    }
    return False;   
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CheckZero(iValue);
    if(iRet == True)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("It doesnt Contains Zero\n");
    }
    
}


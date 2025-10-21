///////////////////////////////////////////////////////
//
//  File name  : 5.1.c
//  Description: Take number from user and Check if
//               its Even or not
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{

    if((iNo % 2) == 0)
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
    int iRet = false;


    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    iRet = CheckEven(iValue1);

    if(iRet == true)
    {
        printf("It is an Even Number");
    }
    else
    {
        printf("It is an Odd Number");
    }
    return 0;
}
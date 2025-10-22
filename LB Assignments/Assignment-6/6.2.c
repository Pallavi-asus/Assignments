///////////////////////////////////////////////////////
//
//  File name  : 6.2.c
//  Description: Accept one number from user an 
//               check wheteher that number is greater 
//               than 100 or not
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter your number\n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("%d is Greater than 100\n",iValue);
    }
    else
    {
        printf("%d is not Greater than 100\n",iValue);
    }
    return 0;
}
///////////////////////////////////////////////////////
//
//  File name  : 6.3.c
//  Description: Accept two numbers from user and 
//               check wheteher that numbers are equal 
//               to each other or not
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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

    printf("Enter your First number\n");
    scanf("%d",&iValue1);

    printf("Enter your Second number\n");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Both the Numbers are equal");
    }
    else
    {
        printf("Both the numbers are not equal");
    }
    return 0;
}
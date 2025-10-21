///////////////////////////////////////////////////////
//
//  File name  : 5.2.c
//  Description: Take two Numbers from user and and give
//               Maximum of Two Numbers
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int FindMax(int iNo1,int iNo2)
{

    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    if(iNo2 > iNo1)
    {
        return iNo2;
    }
        
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;


    printf("Enter First Your Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Your Number\n");
    scanf("%d",&iValue2);

    iRet = FindMax(iValue1,iValue2);

    printf("%d is an Maximum Number\n",iRet);
    
    return 0;

    
}
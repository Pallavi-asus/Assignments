///////////////////////////////////////////////////////
//
//  File name  : 6.4.c
//  Description: Accept three numbers from user and 
//               return its Multiplication
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMult = 1;
    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }
    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }
    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }
    return iMult;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iRet = 0;

    printf("Enter your First number\n");
    scanf("%d",&iValue1);

    printf("Enter your Second number\n");
    scanf("%d",&iValue2);

    printf("Enter your Third number\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of 3 Numbers is %d",iRet);

    return 0;
}
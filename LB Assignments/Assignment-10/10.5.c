///////////////////////////////////////////////////////
//
//  File name  : 10.5.c
//  Description: Accept distance in Squarefeet into
//               Squaremeters
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSquareMeters = 0;
    dSquareMeters = iNo * 0.0929;
    return dSquareMeters;
}

int main()
{
    int iValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Distance in Squarefeet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d Squarefeet is %lf squaremeters",iValue ,dRet);

    return 0;
}
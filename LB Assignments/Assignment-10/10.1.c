///////////////////////////////////////////////////////
//
//  File name  : 10.1.c
//  Description: Accept Radius fromuser and return 
//               Area of its Circle
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

float Area(float Rad)
{
    float fAns = 0.0f;
    fAns = 3.14 * Rad * Rad;
    return fAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = Area(fValue);

    printf("Area of circle is :% f",dRet);

    return 0;
}
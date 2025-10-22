///////////////////////////////////////////////////////
//
//  File name  : 10.4.c
//  Description: Accept Temperature in farehniet and 
//               convert it to celsius
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;
    fCelsius = ((fTemp - 32) * (5.0/9.0));
    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Temperature in Farehniets\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f Farehniets is %f Celsius",fValue,dRet);

    return 0;
}
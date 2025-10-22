///////////////////////////////////////////////////////
//
//  File name  : 10.3.c
//  Description: Accept Distance in km and convert 
//               it to meters
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int DistanceKMtoMeters(int iNo)
{
    int iMeters = 0;
    iMeters = iNo * 1000;
    return iMeters;
}

int main()
{
    int iValue = 0.0f;
    int iRet = 0.0f;

    printf("Enter Distance in km\n");
    scanf("%d",&iValue);

    iRet = DistanceKMtoMeters(iValue);

    printf("%d Kilometers is %d meters",iValue ,iRet);

    return 0;
}
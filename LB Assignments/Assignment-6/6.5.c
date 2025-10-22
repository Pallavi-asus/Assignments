///////////////////////////////////////////////////////
//
//  File name  : 6.5.c
//  Description: Accept total marks and obtained marks 
//               from user and give its percentage
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

float CalculatePercentage(float iTotalMarks , float iObtainedMarks)
{
    float fPer = 0.0f;

    fPer = (iObtainedMarks/iTotalMarks)* 100;

    return fPer;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
  

    float fRet = 0;

    printf("Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks\n");
    scanf("%d",&iValue2);


    fRet = CalculatePercentage(iValue1,iValue2);

    printf("Your Percentage is %f",fRet);

    return 0;
}
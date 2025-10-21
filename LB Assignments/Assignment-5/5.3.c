///////////////////////////////////////////////////////
//
//  File name  : 5.3.c
//  Description: Check Leap Year
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

int FindLeap(int iYear)
{
    if((iYear % 400) == 0)
    {
        printf("It is a Leap year");
    }
    else if((iYear % 4) == 0)
    {
        printf("It is a Leap year");
    }
    else if((iYear % 100) == 0)
    {
        printf("It is a Leap year");
    }
    else
    {
        printf("It is Not a Leap Year");
    }
    
}
int main()
{
    int iYear = 0;

    printf("Enter  Your Year\n");
    scanf("%d",&iYear);

    FindLeap(iYear);

    return 0;

}
///////////////////////////////////////////////////////
//
//  File name  : 1.5.c
//  Description: Accept one number from user and 
//               print that number of stars on the 
//               screen
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Display(iValue1)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iValue1; iCnt++)
    {
        printf("*\t");
    }

}
int main()
{
    int iValue1 = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    Display(iValue1);
   
    return 0;
}
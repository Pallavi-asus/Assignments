///////////////////////////////////////////////////////
//
//  File name  : 2.3.c
//  Description: Accept one number from user and 
//               if Number is less than 10 print Hello 
//               otherwise Demo
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Display(iValue)
{
    int iCnt = 0;

    if(iValue < 10)
    {
        printf("Hello\n");
    }

    else
    {
        printf("Demo\n");

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
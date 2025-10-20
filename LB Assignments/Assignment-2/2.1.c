///////////////////////////////////////////////////////
//
//  File name  : 2.1.c
//  Description: Accept one number from user and 
//               print that number of stars on the 
//               screen
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Display(iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 0;
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
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
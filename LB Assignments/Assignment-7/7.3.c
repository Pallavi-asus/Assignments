///////////////////////////////////////////////////////
//
//  File name  : 7.3.c
//  Description: Accept one number from user and 
//               print its number line
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

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}
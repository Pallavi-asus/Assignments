///////////////////////////////////////////////////////
//
//  File name  : 1.3.c
//  Description: Print 5 to 1 numbers on screen 
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt > 0)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();
    return 0;
}
///////////////////////////////////////////////////////
//
//  File name  : 8.1.c
//  Description: Accept Number from user and if it is 
//               its less than 50 print small 
//               its greater than 50 and less than 100
//               print medium 
//               its greater 100 than print large
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

void Number(int iNo)
{
    if((iNo) <= 50)
    {
        printf("It is small");
    }
    else if((iNo > 50) && (iNo < 100) )
    {
        printf("It is Medium");
    }
    else
    {
        printf("It is Large");
    }
    
    
}
int main()
{
    int iValue1 = 0;

    printf("Enter  Your Number\n");
    scanf("%d",&iValue1);

    Number(iValue1);

    return 0;

}
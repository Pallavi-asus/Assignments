///////////////////////////////////////////////////////
//
//  File name  : 5.4.c
//  Description: Check positivr Negative or Zero
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int CheckNumberType(int iNo)
{
    if((iNo) < 0)
    {
        printf("It is a Negative Number");
    }
    else if((iNo) > 0 )
    {
        printf("It is a Positive Number");
    }
    else
    {
        printf("It is a Zero");
    }
    
    
}
int main()
{
    int iValue1 = 0;
    


    printf("Enter  Your Number\n");
    scanf("%d",&iValue1);

    CheckNumberType(iValue1);

    return 0;

}
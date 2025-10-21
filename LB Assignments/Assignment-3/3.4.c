///////////////////////////////////////////////////////
//
//  File name  : 3.4.c
//  Description: Accept one character from user and 
//               convert its case
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
    
}
int main()
{
    char cValue = '\0';


    printf("Enter Your Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;
}
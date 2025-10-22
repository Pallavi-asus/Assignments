///////////////////////////////////////////////////////
//
//  File name  : 6.1.c
//  Description: Accept name from user and print the
//               same name on screen
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    char Name[30];
    printf("Enter Your Full name\n");
    scanf("%s",&Name);

    printf("Your Name is %s\n",Name);

    return 0;
}
///////////////////////////////////////////////////////
//
//  File name  : 4.2.c
//  Description: Accept number from user and 
//               Display its Factors in Reverse order
//  Author     : Pallavi Sable
//  Date       : 20/10/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2 ; iCnt >= 1 ; iCnt-- )
    {
        
        if((iNo%iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
       
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
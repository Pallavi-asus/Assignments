///////////////////////////////////////////////////////
//
//  File name  : 11.5.c
//  Description: Accept range from user and  print 
//               numbers between that range on 
//               screen in reverse order
//  Author     : Pallavi Sable
//  Date       : 22/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void RangeDisplayRev(iNo1,iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
    }

    for(iCnt = iNo2 ; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Your starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter Your Ending Number\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
   
    return 0;
}
////////////////////////////////////////////////////////////
// 
//  File name :     one.java
//  Description :   To calculate Sum of N Natural Numbers
//  Author :        Pallavi Sable
//  Date :          01/11/2025
//
////////////////////////////////////////////////////////////

class SumDigits
{
    int CalculateSum(int iNo)
    {
        int iSum = 0;
        for (int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
}

class one
{
    public static void main(String A[])
    {
        int iRet = 0;
        SumDigits sobj = new SumDigits();
        iRet = sobj.CalculateSum(10);
        System.out.println("Sum of first 10 natural numbers is: " + iRet);
    }
}

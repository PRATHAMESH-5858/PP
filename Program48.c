// Count No. of digits.

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0 ;

    while (iNo != 0)
    {
        iNo = iNo/10;
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits:%d\n",iRet);

    return 0;
}


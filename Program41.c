// Factorial using backward loop & typedef & updator.

#include<stdio.h>
#include<stdbool.h>

typedef long unsigned int UL;

UL Factorial(int iNo)
{
    int iCnt = 0;
    UL iFact = 1;

    if(iNo < 0)     // Updator
    {
        (iNo = -iNo);
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    UL iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is:%d \n",iRet);

    Factorial(iValue);

    return 0;
}
// Factorial using backward loop & typedef & updator by using while loop.

#include<stdio.h>
#include<stdbool.h>

typedef long unsigned int UL;

UL Factorial(int iNo)
{
    int iCnt = 0;
    UL iFact = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
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
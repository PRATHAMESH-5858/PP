// Factorial using backward loop.

#include<stdio.h>
#include<stdbool.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iDo = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is:%d \n",iRet);

    Factorial(iValue);
        
     return 0;
}
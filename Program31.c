// Checks Whether number is prime or not without Flag.

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt=2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {           
            break;
        }
        
    }
    if(iCnt == (iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number.\n",iValue);
    }
    else
    {
        printf("%d is Not Prime Number.\n",iValue);

    }

    return 0;
}
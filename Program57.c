// Checks Whether there is 8 in given number.

#include<stdio.h>


int CountDigitFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    

    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDigitFrequency(iValue);

    printf("Count of 8 in number:%d"),iRet;

    return 0;
}
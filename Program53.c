// Checks Whether there is 8 in given number.

#include<stdio.h>
#include<stdbool.h>

bool Check8(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo/10;
    }
    if(iDigit == 8)
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

    bRet = Check8(iValue);

    if(bRet == true)
    {
        printf("Digit 8 is Present in number.\n");
    }
    else
    {
        printf("Digit 8 is Not Present in number.\n");

    }

    return 0;
}
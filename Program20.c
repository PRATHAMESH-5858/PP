// Display 1 to n numbers 5 times on screen with accepting input fron user using Updator.

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)  // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

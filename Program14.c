// Display "Jay Ganesh" statement on screen by accepting input from user using updator.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)   // Upadator
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of statement:\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}

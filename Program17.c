// Display 1 to 5 numbers 5 times on screen.

#include<stdio.h>
void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}
#include<stdio.h>

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Ans = 0;

    printf("Enter 1st Number:\n");
    scanf("%d",&No1);

    printf("Enter 2nd Number:\n");
    scanf("%d",&No2);

    Ans = No1 + No2;
    
    printf("Addition is: %d\n",Ans);

    return 0;
}
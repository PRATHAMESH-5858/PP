// I/P : 5
// O/P : -5 -4 -3 -2 -1 

// I/P : 3
// O/P : -3 -2 -1     


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt < 0; iCnt++)
    {
        printf("%d\t",iCnt);
        
    }

}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol:\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}
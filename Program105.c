// I/P : 5
// O/P : a 1 b 2 c 3 d 4 e 5 

// I/P : 3
// O/P : a 1 b 2 c 3  
 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t%d\t",ch,iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol:\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}
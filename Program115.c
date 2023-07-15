/* 
I/P : 
Row : 3
Column : 5

Output : 
a a a a a
b b b b b
c c c c c

*/   


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        ch++;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
/* 
I/P : 
Row : 4
Column : 4

Output : 
1 1 1 1 
* * * * 
3 3 3 3 
* * * * 

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
            if((i % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",i);

            }
        }
        
        printf("\n");
        
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
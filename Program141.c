/*
I/P : 
Row : 4
Column : 4

Output : 
*  A  A  A  
B  *  B  B
C  C  *  C
D  D  D  *

*/   


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';


    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            if((i == j))   
            {
                printf("*\t");
            } 
            else
            {
                printf("%c\t",ch);
            }
            
        }       
        printf("\n");
        printf("\n");
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
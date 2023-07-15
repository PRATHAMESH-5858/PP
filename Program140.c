/*
I/P : 
Row : 4
Column : 4

Output : 
A
A  B
A  B  C
A  B  C  D

*/   


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';


    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= i ; j++, ch++)
        {
            if((i == j) || (i > j))   //Also: if(i<=j)
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
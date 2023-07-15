/*
I/P : 
Row : 5
Column : 5

Output : 
*  @  @  @  @    
$  *  @  @  @
$  $  *  @  @
$  $  $  *  @
$  $  $  $  *

*/   


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    if(iRow != iCol)
    {
        printf("Invalid Input...\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)            //For Diagonal
            {
                printf("*\t");
            }
            else if(i < j)        //For Upper triangle
            {
                printf("@\t");    
            }
            else                  //For Lower triangle
            {
                printf("$\t");
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
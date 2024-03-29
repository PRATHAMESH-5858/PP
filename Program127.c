/* 
I/P : 
Row : 4
Column : 4

Output : 
#  $  $  $
$  #  $  $
$  $  #  $
$  $  $  #        
                     With filter
*/   


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j == i)              // <------- IMP
            {
                printf("#\t");      
            }
            else
            {
                printf("$\t");

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
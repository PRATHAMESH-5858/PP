///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept n number of inputs from user with one more number and return the index value of that number in array.                       
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       
#include<stdlib.h>
#include<stdbool.h>     

bool SearchFirstOcuurance(int Arr[], int iLength, int iNo)
{
   int iCnt = 0;


   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
       if(Arr[iCnt] == iNo)
       {
           break;
       }
       
   }
   if(iCnt == iLength)
   {
       return -1;
   }
   else
   {
       return iCnt;
   }


}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search:\n");
    scanf("%d\n", &iValue);

    printf("Elements of array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOcuurance(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such element.\n");
    }
    else 
    {
        printf("%d occured at index %d \n",iValue,iRet);
    }

    free(ptr);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept n number of inputs from user with one more number and check whether that numnber is present in given array.{With Falg}                         
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       
#include<stdlib.h>
#include<stdbool.h>     

bool Search(int Arr[], int iLength, int iNo)
{
   int iCnt = 0;
   bool bFlag = false;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
       if(Arr[iCnt] == iNo)
       {
           bFlag = true;
           break;
       }
       
   }
   return bFlag;


}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

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

    bRet = Search(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("%d is present in the array.");
    }
    else
    {
        printf("%d is NOt present in the array.");
    }
    

    free(ptr);

    return 0;
}
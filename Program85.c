///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept n number of inputs from user and display Smallest element as well as Largest element from given elements.
//(With 2 differnt functions)                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       
#include<stdlib.h>     

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

}

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Minimum(ptr, iSize);
    printf("Smallest number from elements: %d \n",iRet);

    iRet = Maximum(ptr, iSize);
    printf("Largest number from elements: %d \n",iRet);

    free(ptr);

    return 0;
}
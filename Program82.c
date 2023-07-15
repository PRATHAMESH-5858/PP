/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept n number of inputs from user and perform addition Odd numbers from elements.                              
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       //IO
#include<stdlib.h>      //Memory Managament

int OddAddition(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;

}

int main()              // Entry Point Function
{
    int iSize = 0;      // Store size of array.
    int *ptr = NULL;    // To store address of array.

    int iCnt = 0;       // Loop counter
    int iRet = 0;


    //Step-1: Accept no. of elements.
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);


    //Step-2: Allocate dynamic memory.
    ptr = (int *)malloc(iSize * sizeof(int));


    //Step-3: Accept the elements.
    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    // Pass the array to the function.
    iRet = OddAddition(ptr,iSize);

    printf("Addition of Odd numbers: %d",iRet);

    // Step-6: Deallocate the memory.
    free(ptr);


    return 0;
}
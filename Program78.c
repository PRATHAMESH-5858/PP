/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept n number of inputs from user and Display Even numbers.                               
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       //IO
#include<stdlib.h>      //Memory Managament

void OddDisplay(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            printf("Odd numbers form elements: %d\n",Arr[iCnt]);
        }
    }

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
    OddDisplay(ptr,iSize);

    

    // Step-6: Deallocate the memory.
    free(ptr);


    return 0;
}
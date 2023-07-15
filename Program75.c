/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept n number of inputs from user and store in dynamically allocated memory & perform operations.      //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       //IO
#include<stdlib.h>      //Memory Managament

void Demo(int Arr[], int iLength)
{
    //Step-5: Perform operation on array.
}

int main()              // Entry Point Function
{
    int iSize = 0;      // Store size of array.
    int *ptr = NULL;    // To store address of array.

    int iCnt = 0;       // Loop counter


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

    printf("Elements of the Array:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }


    // Pass the array to the function.
    Demo(ptr,iSize);      // Demo(400.4)


    // Step-6: Deallocate the memory.
    free(ptr);


    return 0;
}
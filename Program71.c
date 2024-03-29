//Accept n number of inputs from user and store in dynamically allocated memory.

#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Memory allocated succesfully...\n");

    return 0;
}
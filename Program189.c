

#include<stdio.h>

void strcatX(char *src, char *dest)
{
    
    
    
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}
// Return count of 'z' in given string.

#include<stdio.h>

int strlenZX(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenZX(Arr);

    printf("Number spaces are: %d\n",iRet);

    return 0;
}
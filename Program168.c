// Return whether 'z' is present in given string or not.  Incomplete

#include<stdio.h>
#include<stdbool.h>

bool strlenDigitsX(char *str)
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

    iRet = strlenDigitsX(Arr);

    printf("Number spaces are: %d\n",iRet);

    return 0;
}
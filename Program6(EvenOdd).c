// Write a program which checks whether number is even or odd.

#include<stdio.h>     // For printf & scanf.
#include<stdbool.h>   // For boolean datatype.


/////////////////////////////////////////////////////
// 
//  Fuction Name: CheckEvenOdd
//  Input: Integer
//  Output: Boolean
//  Description: Checks whether input is even or odd.
//  Author: Prathamesh Pradip Patil
//  Date:  25/04/2023
//
/////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////
//  Entry Point Function.
/////////////////////////////////////////////////////

int main()
{
    int iValue = 0;    //Variable to accept input.
    bool bRet = false; // Variable to accept return value.

    printf("Please enter number to check whether it is even or odd:\n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);  // Function call.

    if(bRet == true)
    {
        printf("%d is Even number.\n",iValue);
    }
    else
    {
        printf("%d is Odd number.\n", iValue);
    }

    return 0;
}
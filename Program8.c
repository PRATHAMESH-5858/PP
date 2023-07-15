// Write a program which accepts the Marks and display the class accordingly.

// 0 to 34      Fail 
// 35 to 49     Pass class
// 50 to 59     Second class
// 60 to 74     First calss
// 75 to 100    First class with distinction.

#include<stdio.h>     // For printf & scanf.
#include<stdbool.h>   // For boolean datatype.


/////////////////////////////////////////////////////
// 
//  Fuction Name: CheckDivisible
//  Input: Integer
//  Output: Boolean
//  Description: Checks whether input is divisible by 3 and 5.
//  Author: Prathamesh Pradip Patil
//  Date:  25/04/2023
//
/////////////////////////////////////////////////////

bool DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))  //Filter
    {
        printf("Bapacha College ahe ka?\n");
        printf("Please enter the input between 0 - 100\n");


    }


    if((fMarks >= 0.0f) && (fMarks < 35.00f))   
    {
        printf("You are fail\n");
    }
    else if ((fMarks >= 35.00f) && (fMarks < 35.00f))
    {
        printf("You got Pass class\n");
    }
    else if ((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You got First claas\n");
    }
    else if ((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got First class \n");
    }
    else if((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        printf("You got First class with Distinction\n");
    }

    

    
}

/////////////////////////////////////////////////////
//  Entry Point Function.
/////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("Please enter your precentage:\n");
    scanf("%f", &fValue);

    DisplayClass(fValue);

    return 0;
}
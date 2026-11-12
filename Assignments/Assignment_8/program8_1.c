
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Number
//      Input           :   Integer
//      Output          :   None
//      Description     :   Classifies a number as Small, Medium or Large.
//      Date            :   03/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input\n");    // Input Validation
        return;
    }

    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Medium\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Number(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Input           :   Integer
//  Output          :   Unsigned Long Long Integer
//  Description     :   Calculates the factorial of a given number.
//  Date            :   03/11/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter the Number : \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue < 0 || iValue > 20)
    {
        fprintf(stderr, "ERROR : Number must be between 0 and 20\n");
        return EXIT_FAILURE;
    }

    iRet = Factorial(iValue);

    printf("Factorial of number is : %llu\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

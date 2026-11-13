
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all odd numbers from 1 to N.
//  Date            :   02/11/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2) // Business Logic
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Error: Invalid input\n");
        return EXIT_FAILURE;
    }

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

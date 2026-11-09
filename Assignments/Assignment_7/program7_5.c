
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays the first five multiples of a given number.
//  Date            :   02/10/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)
    {
        printf("Zero has no five distinct multiples.\n");
        return;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = iNo ; iCnt <= iNo * 5 ; iCnt = iCnt + iNo) // Business Logic
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

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

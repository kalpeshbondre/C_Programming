
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Accept number from user and print that -N to N Numbers.
//  Date            :   02/11/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++) // Business Logic
    {
        printf("%d\t",iCnt);
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

    Display(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

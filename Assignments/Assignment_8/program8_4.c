#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Table
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays the multiplication table of a given number.
//  Date            :   02/10/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iCnt * iNo;
        printf("%d\t", iMult);
    }

    printf("\n\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;

    printf("Enter the number : \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Table(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

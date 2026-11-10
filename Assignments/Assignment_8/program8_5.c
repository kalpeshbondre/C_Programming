#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   TableRev
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays the multiplication table in reverse order.
//  Date            :   02/10/2026
//  Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iCnt * iNo;
        printf("%d\t",iMult);
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

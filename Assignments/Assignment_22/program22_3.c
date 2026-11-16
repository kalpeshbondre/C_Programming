#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Pattern
//      Input           :   Integer
//      Output          :   Void
//      Description     :   Display Numbers In Ascending Order Followed By Hash Symbols.
//      Date            :   08/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t#\t",iCnt);
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    if(scanf("%d",&iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    if(iValue <= 0)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Pattern(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
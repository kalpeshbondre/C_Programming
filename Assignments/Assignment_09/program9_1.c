#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Display
//      Input           :   Integer
//      Output          :   None
//      Description     :   Displays '*' and '#' symbols N times.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
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

    Display(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef signed long long SLONG;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   DollarToInr
//      Input           :   Integer
//      Output          :   SLONG
//      Description     :   Converts US Dollars into Indian Rupees.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////

SLONG DollarToInr(int iNo)
{
    SLONG iINR = 0;

    iINR = (SLONG)iNo * 70;

    return iINR;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;
    SLONG iRet = 0;

    printf("Enter Number of USD : \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue < 0)
    {
        fprintf(stderr, "ERROR : Invalid USD Amount\n");
        return EXIT_FAILURE;
    }

    iRet = DollarToInr(iValue);

    printf("Value in INR is : %lld\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

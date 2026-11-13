#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   OddFactor
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Returns the multiplication of all odd factors.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactor(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = 1, iMult = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    iRet = OddFactor(iValue);

    printf("Odd Factorial of number is : %d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

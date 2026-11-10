#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   FactorialDiff
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Returns the Difference of Even and Odd Factors
//      Date            :   02/10/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEMult = 1;
    int iOMult = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Input Updater
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEMult = iEMult * iCnt;
        }
        else
        {
            iOMult = iOMult * iCnt;
        }
    }

    iDiff = iEMult - iOMult;

    return iDiff;
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

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

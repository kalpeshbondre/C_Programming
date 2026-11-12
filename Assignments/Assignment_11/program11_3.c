
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   RangeSum
//      Input           :   Integer,Integer
//      Output          :   Integer
//      Description     :   Accept range from user and do summation of all numbers in between that range
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart, iSum = 0; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
    else
    {
        return -1;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the First Number : \n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue1 <= 0)
    {
        fprintf(stderr, "Invalid Range\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Second Number : \n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue2 <= 0)
    {
        fprintf(stderr, "Invalid Range\n");
        return EXIT_FAILURE;
    }

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Addition is : %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

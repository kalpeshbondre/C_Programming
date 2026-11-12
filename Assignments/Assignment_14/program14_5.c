#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   FactDiff
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Difference between Factors and Non-Factors.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iFSum = 0;
    int iNFSum = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFSum = iFSum + iCnt;
        }
        else
        {
            iNFSum = iNFSum + iCnt;
        }
    }
    
    iDiff = iFSum - iNFSum ;

    return iDiff;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    if(scanf("%d",&iValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    
    if(iValue <= 0)
    {
        fprintf(stderr, "ERROR : Please enter a positive number\n");
        return EXIT_FAILURE;
    }

    iRet = FactDiff(iValue);

    printf("Difference between Factors and Non-Factors : %d\n",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
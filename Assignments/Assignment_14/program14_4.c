#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   SumNonFact
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Summation of Non Factors.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
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

    iRet = SumNonFact(iValue);

    printf("Summation of non Factors is : %d \n",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
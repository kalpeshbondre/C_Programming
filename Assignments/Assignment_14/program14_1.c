#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   MultFact
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Calculate the Product Of Factors.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 1, iMult = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
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

    iRet = MultFact(iValue);

    printf("Product of Factor : %d \n",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
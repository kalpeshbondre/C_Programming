#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   CountDiff
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Calculate the difference between sum of even and odd digits.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigits = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigits = iNo % 10;
        if((iDigits % 2) == 0)
        {
            iEven = iEven + iDigits;
        }
        else
        {
            iOdd = iOdd + iDigits;
        }
        iNo = iNo / 10;
    }

    iDiff = iEven - iOdd ;
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

    printf("Enter the Number : \n");
    if(scanf("%d",&iValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input \n");
        return EXIT_FAILURE;
    }

    iRet = CountDiff(iValue);

    printf("Difference between sum of even and odd digits : %d\n",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
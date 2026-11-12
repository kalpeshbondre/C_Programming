#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   KMtoMeter
//      Input           :   Integer
//      Output          :   Integer
//      Description     :   Convert KM to Meter
//      Date            :   02/10/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    const int iMeterPerKM = 1000;
    int iMeter = 0;

    iMeter = iNo * iMeterPerKM;

    return iMeter;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :\n");

    if(scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue < 0)
    {
        fprintf(stderr, "ERROR : Distance cannot be negative\n");
        return EXIT_FAILURE;
    }

    iRet = KMtoMeter(iValue);

    printf("%d Kilometer is equal to %d Meter\n", iValue, iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

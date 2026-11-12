#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   FhtoCs
//      Input           :   Float
//      Output          :   Double
//      Description     :   Convert Fahrenheit to Celsius
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCs = 0.0;

    dCs = (fTemp - 32.0) * (5.0 / 9.0);

    return dCs;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");

    if(scanf("%f", &fValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    dRet = FhtoCs(fValue);

    printf("%.4f Fahrenheit is equal to %.4f Celsius\n", fValue, dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

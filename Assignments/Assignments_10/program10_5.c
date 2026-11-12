#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   SquareMeter
//      Input           :   Integer
//      Output          :   Double
//      Description     :   Conversion of Square Feet to Square Meter
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iSquare)
{
    double dMeter = 0.0;

    dMeter = iSquare * 0.0929;

    return dMeter;

}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : \n");
    if(scanf("%d",&iValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input \n");
        return EXIT_FAILURE;
    }

    if(iValue < 0)
    {
        fprintf(stderr,"ERROR : Area cannot be negative\n");
        return EXIT_FAILURE;
    }

    dRet = SquareMeter(iValue);

    printf("Square Feet in Square Meter is : %f\n",dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

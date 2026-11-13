#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Percentage
//      Input           :   Integer,Integer
//      Output          :   Float
//      Description     :   Calculate the Precentage.
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fPerc = 0.0f;

    fPerc = ((float)iNo2 / (float)iNo1) * 100;

    return fPerc;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total Marks: \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    printf("Please enter marks obtained: \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if((iValue1 <= 0) || (iValue2 < 0) || (iValue2 > iValue1))
    {
        fprintf(stderr, "ERROR : Invalid Marks\n");
        return EXIT_FAILURE;
    }
    
    fRet = Percentage(iValue1,iValue2);

    printf("Percentage : %.2f",fRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
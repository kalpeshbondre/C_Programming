#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   NonFact
//      Input           :   Integer
//      Output          :   None
//      Description     :   Display the Non Factors.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

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

    NonFact(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
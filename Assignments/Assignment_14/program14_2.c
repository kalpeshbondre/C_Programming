#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   FactRev
//      Input           :   Integer
//      Output          :   None
//      Description     :   Display the Factors in Reverse Order.
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2 ; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
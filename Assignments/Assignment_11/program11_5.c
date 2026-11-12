#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   RangeDisplayRev
//      Input           :   Integer,Integer
//      Output          :   None
//      Description     :   Accept range from user and display all numbers in Reverse order in between that range
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt >=iStart; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        printf("Invalid Input \n");
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr,"ERROR: Invalid Input\n");
        return EXIT_FAILURE;
    }

    printf("Enter ending point :\n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr,"ERROR: Invalid Input\n");
        return EXIT_FAILURE;
    }

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
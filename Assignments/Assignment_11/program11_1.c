#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   RangeDisplay
//      Input           :   Integer,Integer
//      Output          :   None
//      Description     :   Accept range from user and display all numbers in between that range
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        printf("Invalid Input \n");
    }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the First Number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
    }

    printf("Enter the Second Number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
    }

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
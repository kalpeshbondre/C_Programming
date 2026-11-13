#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkEqual
//      Input           :   Integer,Integer
//      Output          :   Boolean
//      Description     :   Check whether number is Equal or Not.
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter the First number: \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Second number: \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    
    bRet = ChkEqual(iValue1,iValue2);

    if(bRet)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
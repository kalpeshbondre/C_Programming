#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkGreater
//      Input           :   Integer
//      Output          :   Boolean
//      Description     :   Check whether number is greater than 100.
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    if(scanf("%d",&iValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    
    bRet = ChkGreater(iValue);

    if(bRet)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
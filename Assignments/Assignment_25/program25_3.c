/*
    Input :  7

    Output : TRUE

    Input :  d

    Output : FALSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkDigit
//      Input           :   Integer
//      Output          :   Bool
//      Description     :   Check whether the given character is a digit.
//      Date            :   10/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{

    if((ch >= '0') && (ch <= '9')) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Digit : \n");
    if(scanf("%c",&cValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit \n");
    }
    else
    {
        printf("It is not Digit \n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
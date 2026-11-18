/*
    Input :  g

    Output : TRUE

    Input :  D

    Output : FALSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkSmall
//      Input           :   Character 
//      Output          :   Bool
//      Description     :   Check whether the given character is a lowercase alphabet
//      Date            :   10/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{

    if((ch >= 'a') && (ch <= 'z'))
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

    printf("Enter the Character : \n");
    if(scanf("%c",&cValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small Case Character \n");
    }
    else
    {
        printf("It is not Small Case Character \n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
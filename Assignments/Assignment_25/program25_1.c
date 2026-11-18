/*
    Input :  F

    Output : TRUE

    Input :  &

    Output : FALSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkAlpha
//      Input           :   Character 
//      Output          :   Bool
//      Description     :   Check the Character
//      Date            :   10/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkAlpha(char ch)
{

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character \n");
    }
    else
    {
        printf("It is not Character \n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
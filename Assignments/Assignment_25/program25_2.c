/*
    Input :  F

    Output : TRUE

    Input :  d

    Output : FALSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkCapital
//      Input           :   Character 
//      Output          :   Bool
//      Description     :   Check the Capital Character
//      Date            :   10/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
{

    if((ch >= 'A') && (ch <= 'Z')) 
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

    bRet = ChkCapital(cValue);

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
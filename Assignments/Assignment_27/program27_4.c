/*
    Input :  "marvellous"

    Output : TRUE

    Input :  "Demo"

    Output : TRUE

    Input :  "xyz"

    Output : FALSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkVowel
//      Input           :   String
//      Output          :   Bool
//      Description     :   Checks whether the given string contains any vowels
//      Date            :   11/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    if(str == NULL)
    {
        return false;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true;
        }
        str++;
    }

    return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter string : \n");
    if(scanf(" %49[^\n]", Arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("Does not Contains Vowels\n");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

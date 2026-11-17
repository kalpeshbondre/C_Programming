/*
    Input  :    Marvellous Multi OS
                e
    Output :    TRUE

    Input  :    Marvellous Multi OS
                W
    Output :    False
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   ChkChr
//      Input           :   Character Pointer (String)
//      Output          :   Boolean
//      Description     :   Check whether character is present in string
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkChr(const char *str, char ch)
{
    if(str == NULL)
    {
        return false;
    }

    while (*str != '\0')
    {
        if(*str == ch)
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

int main(void)
{
    char arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter string :\n");
    if(scanf("%99[^\n]", arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Charchater : \n");
    if(scanf(" %c",&cValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    bRet = ChkChr(arr , cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

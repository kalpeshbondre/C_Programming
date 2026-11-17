/*
    Input  :    Marvellous Multi OS
                M
    Output :    0

    Input  :    Marvellous Multi OS
                W
    Output :    -1
*/

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   FirstChar
//      Input           :   Character Pointer (String), Character
//      Output          :   Integer
//      Description     :   Return the index of the first occurrence of a character in string.
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(const char *str, char ch)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        str++;
        iCnt++;
    }
    return -1;
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
    int iRet = 0;

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

    iRet = FirstChar(arr , cValue);

    printf("First occurrence index : %d",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

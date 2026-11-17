/*
    Input  :    Marvellous Multi OS
                M
    Output :    2

    Input  :    Marvellous Multi OS
                W
    Output :    0
*/

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   CountChar
//      Input           :   Character Pointer (String), Character
//      Output          :   Integer
//      Description     :   Count the frequency of character is present in string
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(const char *str, char ch)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(arr , cValue);

    printf("Character frequency : %d",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

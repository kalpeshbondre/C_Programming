
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   strtooglex
//      Input           :   Character Pointer (String)
//      Output          :   Void
//      Description     :   Toggle the case of all alphabetic characters in a string.
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void strtooglex(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    char arr[20] = {'\0'};

    printf("Enter string :\n");
    if(scanf("%19[^\n]", arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    strtooglex(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

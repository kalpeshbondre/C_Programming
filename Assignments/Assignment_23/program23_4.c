
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   DisplayDigit
//      Input           :   Character Pointer (String)
//      Output          :   Void
//      Description     :   Display the Digits from the string.
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
    printf("\n");
    
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

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   CountWhite
//      Input           :   Character Pointer (String)
//      Output          :   Void
//      Description     :   Count White Spaces.
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str == ' ')
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
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    if(scanf("%19[^\n]", arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

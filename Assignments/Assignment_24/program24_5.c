
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   StrRevX
//      Input           :   Character Pointer (String)
//      Output          :   Void
//      Description     :   Reverse the string in place.
//      Date            :   09/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iCnt = 0;
    char temp;
    char *ptr = str;

    if(str == NULL)
    {
        return;
    }

    while(*ptr != '\0')
    {
        iCnt++;
        ptr++;
    }

    for(int i = 0; i < iCnt / 2; i++)
    {
        temp = str[i];
        str[i] = str[iCnt - i - 1];
        str[iCnt - i - 1] = temp;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    if(scanf("%49[^\n]", Arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    StrRevX(Arr);

    printf("Modified string is : %s\n", Arr);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

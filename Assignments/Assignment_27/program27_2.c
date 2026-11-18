/*
    Input :  "Marvellous"

    Output : 9
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   CountSmall
//      Input           :   String
//      Output          :   Integer
//      Description     :   Counts the number of Small characters in a string
//      Date            :   11/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :");
    if(scanf("%19[^'\n']",Arr) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    iRet = CountSmall(Arr);

    printf("Count of Small Letters is : %d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
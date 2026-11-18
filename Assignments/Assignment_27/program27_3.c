/*
    Input :  "MarvellouS"

    Output : 6   (8-2)
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Difference
//      Input           :   String
//      Output          :   Integer
//      Description     :   Difference between Small Letters and Capital Letters 
//      Date            :   11/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt = 0;
    int iUp = 0 , iLo = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iLo++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iUp++;
        }
        str++;
    }

    iCnt = iLo - iUp;

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

    iRet = Difference(Arr);

    printf("Difference between Small Letters and Capital Letters : %d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
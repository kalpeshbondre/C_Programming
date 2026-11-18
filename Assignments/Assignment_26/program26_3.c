/*
    Input :  Q

    Output : Q   R   S   T   U   V   W   X   Y   Z

    Input :  m

    Output : m   l   k   j   i   h   g   f   e   d   c   b   a

    Input :  8

    Output :

*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Display
//      Input           :   Character
//      Output          :   None
//      Description     :   Displays characters till Z for capital, or reverse till a for small
//      Date            :   11/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch ; iCnt <= 'Z' ; iCnt++)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch ; iCnt >= 'a' ; iCnt--)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
    }

    else
    {
        printf("%c\n",ch);
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the Character :\n");
    if(scanf("%c",&cValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Display(cValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

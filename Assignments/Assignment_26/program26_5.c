/*
    Input :  A

    Output : Decimal        65
             Octal          0101
             Hexadecimal    0X41
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Display
//      Input           :   Character
//      Output          :   None
//      Description     :   Displays the ASCII value of a character in Decimal, Octal, and Hexadecimal formats
//      Date            :   11/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t0%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    if(scanf(" %c", &cValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Display(cValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

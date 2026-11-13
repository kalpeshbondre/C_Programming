#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Pattern
//      Input           :   Integer, Integer
//      Output          :   Void
//      Description     :   Display Alphabet Pattern.
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';

        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++;
        }

        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns :\n");

    if(scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(iValue1 <= 0 || iValue2 <= 0)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

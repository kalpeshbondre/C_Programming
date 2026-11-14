/*
    Input :     iRow = 3     iCol = 5
    Output : 
                A   A   A   A   A   A
                B   B   B   B   B   B
                C   C   C   C   C   C
*/

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

    ch = 'A';

    for(i = 1; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }

        printf("\n");
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
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

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

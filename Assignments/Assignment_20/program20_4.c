/*
    Input :     iRow = 6     iCol = 6
    Output : 
                *       *       *       *       *       *
                *       #       #       #       *       *
                *       #       #       *       $       *
                *       #       *       $       $       *
                *       *       $       $       $       *
                *       *       *       *       *       *
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Pattern
//      Input           :   Integer, Integer
//      Output          :   Void
//      Description     :   Display Star Box with Anti-Diagonal, Hash, and Dollar Pattern.
//      Date            :   07/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {   
            if(i == 1 || i == iRow || j == 1 || j == iCol || i + j == iCol + 1)
            {
                printf("*\t");
            }
            else if(j + i < iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
            
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and columns: \n");
    if(scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        fprintf(stderr, "ERROR: Invalid Input \n");
        return EXIT_FAILURE;
    }

    if(iValue1 <= 0 || iValue2 <= 0)
    {
        fprintf(stderr, "ERROR: Invalid Input \n");
        return EXIT_FAILURE;
    }

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

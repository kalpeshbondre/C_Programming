/*
    Input :     iRow = 4     iCol = 4
    Output : 
                1       2       3       4
                        2       3       4
                                3       4
                                        4
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Pattern
//      Input           :   Integer, Integer
//      Output          :   Void
//      Description     :   Display Upper-Right Number Triangle Pattern.
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
            if(j >= i)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
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

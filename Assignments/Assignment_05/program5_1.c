
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Input         : Three Integers
// Output        : None
// Description   : Finds the greatest of three numbers.
// Date          : 22/10/2026
// Author        : Kalpesh Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("Largest number is %d\n", iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("Largest number is %d\n", iSecond);
    }
    else
    {
        printf("Largest number is %d\n", iThird);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

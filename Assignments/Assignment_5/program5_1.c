#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Input         : Integer
// Output        : None
// Description   : Find the Greatest of three number
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iSecond)
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

int main()
{
    int iValuel = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");

    scanf("%d %d %d", &iValuel, &iValue2, &iValue3);

    FindGreatest(iValuel, iValue2, iValue3);

    return EXIT_SUCCESS;
}

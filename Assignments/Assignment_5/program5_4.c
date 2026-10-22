#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Input         : Integer
// Output        : None
// Description   : Check Multidivisibility by 3 & 5
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by both 3 and 5");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("not Divisible by Both 3 and 5");
    }

}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
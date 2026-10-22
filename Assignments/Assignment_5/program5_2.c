#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Input         : Integer
// Output        : None
// Description   : Check Leap Year
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid year");
    }
    else if(iYear % 4 == 0)
    {
        printf("It is Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;

}

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Input         : Integer
// Output        : None
// Description   : Calculate Employee bonus
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
    }
    else
    {
        fBonus = fSalary * 5 / 100;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter monthly salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

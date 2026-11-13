
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Input         : Integer
// Output        : None
// Description   : Calculte electricity bill.
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid unit consumption\n");
        return;
    }

    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f)
                + ((iUnits - 200) * 10.0f);
    }

    printf("Bill = %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

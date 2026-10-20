
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : None
// Description   : Displays * character according to the given number
// Date          : 20/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    
    int iCnt = 0;

    //Input Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Business Logic
    while (iCnt <= iNo)
    {
        printf("* ");
        iCnt++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    // Function call
    Display(iValue);

    return EXIT_SUCCESS;
}

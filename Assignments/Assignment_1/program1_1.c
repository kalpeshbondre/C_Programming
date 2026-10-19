#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divide
// Input         : Integer, Integer
// Output        : Integer
// Description   : Performs division of two integers
// Date          : 19/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(
            int iNo1,       // First Input
            int iNo2        // Second Input
          )
{
    int iAns = 0;

    // Input validation
    if(iNo2 == 0)
    {
        return -1;
    }

    // Business Logic
    iAns = iNo1 / iNo2;

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    // Function Call
    iRet = Divide(iValue1, iValue2);

    // Display Result
    printf("Division is %d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

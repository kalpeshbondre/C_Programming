#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEven
// Input         : Integer
// Output        : Boolean
// Description   : Accepts a number and checks whether it is even or odd
// Date          : 20/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    // Function Call
    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckName
// Input         : integer
// Output        : None
// Description   : check number is positive number or negative
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number\n");
    }
    else if(iNo < 0 )
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Input         : Character
// Output        : None
// Description   : Find the uppercase, lower case , digit , special character
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase letter");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase letter");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
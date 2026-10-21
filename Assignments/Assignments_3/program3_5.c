#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   ChkVowel
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Accept one character from user and check whether that character is vovel or not.
//  Date            :   20/10/2026
//  Author          :   Kalpesh Balappa Bondre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool ChkVowel(char cValue)
{
    if  (  
            (cValue == 'a') || (cValue == 'e') || 
            (cValue == 'i') || (cValue == 'o') || 
            (cValue == 'u') || (cValue == 'A') ||
            (cValue == 'E') || (cValue == 'I') ||
            (cValue == 'O') || (cValue == 'U') 
        )
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

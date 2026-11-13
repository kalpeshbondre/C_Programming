#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//  Funtion Name    :   Accept
//  Input           :   Integer
//  Output          :   None
//  Description     :   Accept one number from user and print that number of * on screen.
//  Date            :   19/10/2026
//  Author          :   Kalpesh Balappa Bondre
/////////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    //Bussiness Logic
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the Number : \t");
    scanf("%d", &iValue);

    //Function call
    Accept(iValue);

    return EXIT_SUCCESS;
}
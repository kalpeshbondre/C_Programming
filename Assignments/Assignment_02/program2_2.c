#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Accept one from user and print that number of * on screen
//  Date            :   20/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    //Input Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    //Bussiness Logic
    while(iNo >= iCnt)
    {
        printf("* ");
        iNo--;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number kb :\t");
    scanf("%d",&iValue);

    //Function Call
    Display(iValue);

    return EXIT_SUCCESS;
}

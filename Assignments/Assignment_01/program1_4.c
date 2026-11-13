#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Input           :   Integer
//  Output          :   Boolean
//  Description     :   Accept one number and check whether is divisible by 5 or not
//  Date            :   19/10/2026
//  Author          :   Kalpesh Balappa Bondre
//  
///////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \t");
    scanf("%d",&iValue);

    //Function Call
    bRet = Check(iValue);

    //Display Result
    if(bRet == true)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }

    return EXIT_SUCCESS;

}
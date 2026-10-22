#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Input         : integer
// Output        : None
// Description   : Find the greatest two number
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("Greater number is : %d", iFirst);
    }
    else if(iFirst < iSecond )
    {
        printf("Greater number is : %d", iSecond);
    }
    else if(iFirst == iSecond)
    {
        printf("Both number are equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1 , iValue2);

    return EXIT_SUCCESS;
}

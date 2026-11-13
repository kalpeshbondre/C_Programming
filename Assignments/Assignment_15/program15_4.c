#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   Multiply
//      Input           :   Integer,Integer,Integer
//      Output          :   Integer
//      Description     :   Product of Three Numbers (Ignoring Zero Values)..
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        iMult = 0;
    }

    return iMult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter the Three number: \n");
    if(scanf("%d %d %d",&iValue1,&iValue2,&iValue3) != 3)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Product of %d %d %d = %d\n",iValue1,iValue2,iValue3,iRet);
    
    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
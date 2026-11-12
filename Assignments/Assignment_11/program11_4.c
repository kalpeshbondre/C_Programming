#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   RangeSumEven
//      Input           :   Integer,Integer
//      Output          :   Integer
//      Description     :   Accept range from user and do summation of all Even numbers in between that range
//      Date            :   04/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;    
            }
        }
        return iSum;
    }
    else
    {
        return -1;
    }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0, iRet = 0;

    printf("Enter the First Number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }
    if(iValue1 <= 0)
    {
        fprintf(stderr,"Invalid Range\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Second Number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Invalid Range\n");
        return EXIT_FAILURE;
    }
    if(iValue2 <= 0)
    {
        fprintf(stderr,"Invalid Range\n");
        return EXIT_FAILURE;
    }

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Addition is : %d\n", iRet);
    }

    return EXIT_SUCCESS;

}

///////////////////////////////////////////////////////////////////////////////////////////////////
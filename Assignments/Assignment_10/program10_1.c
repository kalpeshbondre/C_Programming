#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   CircleArea
//      Input           :   Float
//      Output          :   Double
//      Description     :   Calculate the Area of circle
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    const float PI = 3.14f;
    double dArea = 0.0;

    dArea = (PI*fRadius*fRadius);

    return dArea;

}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    if(scanf("%f",&fValue) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input \n");
        return EXIT_FAILURE;
    }

    if(fValue < 0.0f)
    {
        fprintf(stderr,"ERROR : Radius cannot be negative\n");
        return EXIT_FAILURE;
    }

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4f\n",dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
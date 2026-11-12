#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   RectArea
//      Input           :   Float,Float
//      Output          :   Double
//      Description     :   Calculate the Area of Rectangle
//      Date            :   05/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight ;

    return dArea;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Width :\n");
    if(scanf("%f",&fValue1) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input \n");
        return EXIT_FAILURE;
    }
    if(fValue1 < 0.0f)
    {
        fprintf(stderr,"ERROR : Width cannot be negative\n");
        return EXIT_FAILURE;
    }

    printf("Enter Height :\n");
    if(scanf("%f",&fValue2) != 1)
    {
        fprintf(stderr,"ERROR : Invalid Input \n");
        return EXIT_FAILURE;
    }
    if(fValue2 < 0.0f)
    {
        fprintf(stderr,"ERROR : Height cannot be negative\n");
        return EXIT_FAILURE;
    }

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle : %.4f \n",dRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
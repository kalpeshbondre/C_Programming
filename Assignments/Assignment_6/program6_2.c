#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmisssion
// Input         : Integer, Float 
// Output        : None
// Description   : Check admission eligibility.
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckAdmission (float fMarks, int iAge)
{
    if(fMarks <= 0 && iAge <= 0 )
    {
        printf("Invalid input");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligibale for Addmission");
    }
    else
    {
        printf("Not eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: "); 
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}    
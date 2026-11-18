/*
    5. Accept division of student from user and depends on the division display exam timing. 
       There are 4 divisions in school as A,B,C,D. 
       Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
       (Application should be case insensitive)

    Input :  C

    Output : Your exam at 9.20 AM

    Input :  d

    Output : Your exam at 10.30 AM
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   :   DisplaySchedule
//      Input           :   Character 
//      Output          :   None
//      Description     :   Display exam timing based on student division
//      Date            :   10/11/2026
//      Author          :   Kalpesh Balappa Bondre
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            fprintf(stderr, "ERROR : Invalid Division\n");
            break;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    
    printf("Enter the Division : \n");
    if(scanf(" %c", &cValue) != 1)
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    if(!((cValue >= 'A') && (cValue <= 'D')) || ((cValue >= 'a') && (cValue <= 'd')))
    {
        fprintf(stderr, "ERROR : Invalid Input\n");
        return EXIT_FAILURE;
    }

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////////////////



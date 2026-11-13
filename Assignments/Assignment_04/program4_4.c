#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Input         : integer
// Output        : None
// Description   : Check Voting Eligibilty
// Date          : 22/10/2026
// Author        : Kalpesh Balappa Bondre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not Eligible for voting\n");
    }
}

int main()
{
    int iage = 0;

    printf("Enter yor age: ");
    scanf("%d", &iage);

    CheckVotingEligibility(iage);

    return EXIT_SUCCESS;
}

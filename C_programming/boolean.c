#include <stdio.h>
#include <stdbool.h> //if this library is not used, _Bool is used in variable declaration

/*
* Task - working with boolean data
*
*
*/

int main()
{
	bool voter = true;
	printf("Will you be voting? Enter 1 for True  and 0 for False:%i \n", voter);
	int no_of_participants;
	printf("Enter no of participants: ");

	scanf("%i", &no_of_participants);
	
	int total = no_of_participants * voter;
	printf("Total number of votes: %i\n", total);	
}

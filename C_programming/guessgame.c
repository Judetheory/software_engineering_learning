#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int maxvalue = 5;
	
	srand(time(NULL));
	int randomnumber = rand() % maxvalue;
	printf("Make a guess: ");
	int input;
	scanf("%d", &input);

	if (randomnumber == input)
	{
		printf("Congratiulaion!!! you did well\n");
	}
	else
{
		printf("Sorry!!!, you lose\n");

	}

}


#include <stdio.h>

int main ()
{
	printf("How many liters of water do you drink a day? ");
	int water;
	scanf("%d", &water);

	switch(water)
	{
		case 0:
			printf("Shey!!! you dey whyne your kidney abi!\n");
			break;

		case 1:
			printf("That is a poor healthy routine\n");
			break;
		case 2:
			printf("Fair enough but you can improve\n");
			break;
		case 3:
			printf("Very encouraging\n");
			break;
		case 4:
			printf("You can never have kidney stone\n");
			break;
		default:
			printf("Your kidney is very healthy\n");
			break;
		
	}
}

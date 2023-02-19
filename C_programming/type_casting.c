#include <stdio.h>

int main()
{
	printf("Enter number of eggs produced: ");
	int eggs;
	scanf("%i", &eggs);
	double dozen = (double) eggs / 12;
	printf("Total production for the day is %f dozens\n", dozen);
	return (0);
}

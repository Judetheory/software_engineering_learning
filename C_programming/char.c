#include <stdio.h>

/*
* Task - create a program that will convert character to its ASCII value and vice versa
*/

int main()
{
	char ASCII;

	printf("Enter a character: ");
	scanf("%c", &ASCII);
	printf("ASCII value is: %i\n", ASCII);
	
	int integer;
	printf("Enter integer from 0-127: ");
	scanf("%i", &integer);
	printf("The character equivalent is: %c\n", integer);

	return (0);
}
	

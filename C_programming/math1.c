#include <stdio.h>
#include <math.h>

/*
* Task - create an app that solves pythagoras theorem
* a^2 + b^2 = c^2
*/

int main()
{
	int a, b, c;
	printf("Enter Adjacent value: ");
	scanf("%i", &a);
	printf("Enter Opposite value: ");
	scanf("%i", &b);
	c = sqrt((a*a) + (b*b));
	printf("The hyothenus of the right angle triangle is: %i\n", c);
	return (0);
} 

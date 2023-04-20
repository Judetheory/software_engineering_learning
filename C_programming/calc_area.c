#include <stdio.h>

int main()

{
	int radius;
	printf("Enter radius of circle:");
	scanf("%i\n", &radius);
	double area = 3.1419 * (radius * radius);
	printf("The area of the %i radius farm is %f\n", radius, area);
}

#include <stdio.h>

/*
* Notable conversion characters
* ______________________________

* %f - Decimal notation
* %e - Scientific notation
* %g - computer decides
	if e < -4 or e > 5
	else it will decimal notation
* Task - write a script that shows how you take input of a number and display in the above 3 notation formats
* NOTE - if you are using double data type, scanf should take "%lf"
*
*/
int main(void)

{
	double voters;

	printf("How many voters are in your LGA: ");

	scanf("%lf", &voters);
	printf("%f Voters\n%e Voters\n%g Voters\n", voters, voters, voters);

	return (0);
}

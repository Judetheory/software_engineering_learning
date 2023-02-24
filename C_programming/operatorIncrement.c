#include <stdio.h>
/*
* Task - John borrowed NGN20,000 from LAPO. He pays 2% interest everyday cummulatively. Lets keep it simple first.
*/

int main()
{
	int capital = 20000;
	printf("first payment: %i\n", capital);
	capital *= 0.02;
	printf("Interest on First payment: %i\n", capital);
	return(0);
}

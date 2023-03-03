#include <stdio.h>

int main ()

{
	int const row = 2;
	int const column = 3;

	int grade[row][column] = { 
		{23, 54, 65}, 
		{76, 86, 35} 
	};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d ", grade[i][j]);
		}
		printf("\n");

	}

	return 0;
}

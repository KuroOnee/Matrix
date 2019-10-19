#include <stdio.h>

int main (void)
{
	int counter = 1;
	const int N = 5;
	int matrix[N][N];
	for (int i=0; i < N;i++)
	{
		for (int j=0; j < N;j++)
		{
			matrix[i][j] = counter;
			counter++;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

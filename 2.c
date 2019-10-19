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
			if (i > j)
				matrix[i][j] = 0;
			else
				matrix[i][j] = 1;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

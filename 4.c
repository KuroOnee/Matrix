#include <stdio.h>

int main (void)
{
	int counter = 1;
	int iter = 0;
	int N;
	scanf("%d",&N);
	int matrix[N][N];
	int k = N-1;
	for (int i=0; i < N;i++)
	{
		for (int j=0; j < N;j++)
		{
			matrix[i][j] = 0;
		}
	}
	while (k > 1)
	{	
		for (int i = 0; i < k;i++)
		{
			matrix[iter][iter+i] = counter;
			counter++;	
		}
		for (int i = 0; i < k;i++)
		{
			matrix[iter+i][N-iter-1] = counter;
			counter++;
		}
		for (int i = 0; i < k;i++)
		{
			matrix[N-iter-1][N-iter-i-1] = counter;
			counter++;
		}
		for (int i = 0; i < k;i++)
		{
			matrix[N-iter-i-1][iter] = counter;
			counter++;
		}
		iter++;
		k-=2;
	}
	matrix[(N/2)][(N/2)] = counter;
	for (int i=0; i < N;i++)
	{
		for (int j=0; j < N;j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}



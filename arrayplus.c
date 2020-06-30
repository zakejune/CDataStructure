#include <stdio.h>
#define M 3
#define N 3
#define K 3
int main()
{
	int A[M][K] = { 0 };
	int B[K][N] = { 0 };
	int C[M][N] = { 0 };
	int i = 0;
	int j = 0;
	int m = 0;
	printf("请输入A矩阵：\n");
	for (i = 0; i < M; i++)
	{
		printf("A矩阵的%d行\n", i);
		for (j = 0; j < K; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("请输入B矩阵：\n");
	for (i = 0; i < K; i++)
	{
		printf("B矩阵第%d行\n", i);
		for (j = 0; j < N; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("C矩阵:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			int sum = 0;
			for (m = 0; m < K; m++)
			{
				sum = sum + A[i][m] * B[m][j];
			}
			C[i][j] = sum;
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}


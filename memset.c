#include<stdio.h>
#include<string.h>
int main()
{
    int A[3][3];
    printf("Please input array-A,sir/madam: \n");
    for (int i = 0; i < 3; i++)
	{
	 	for (int j = 0; j < 3; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
    printf("the array is:\n");
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
    printf("memset \n");
    memset(A,0,sizeof(A));

    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
}
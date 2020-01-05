#include <stdio.h>
void main()
{
	int matA[2][2] = {1,2,3,4};
	int matB[2][2] = {7,8,9,5};
	int matC[2][2] = {0};

	printf("Product Of A,B is: \n");

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
			for(int k=0; k<2; k++)
			{
				matC[i][j] += (matA[i][k] * matB[k][j]);
			}
	}

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%d\t",matC[i][j]);
		}
		puts("");
		
	}
}
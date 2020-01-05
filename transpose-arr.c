#include <stdio.h>
void main()
{
	int mat[4][4] = {7,2,3,4,4,2,9,9,5,3,5,2,1,5,2,8};

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		puts("");	
	}

	printf("Transpose of above matrix is: \n");

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%d\t", mat[j][i]);
		}
		puts("");	
	}
}
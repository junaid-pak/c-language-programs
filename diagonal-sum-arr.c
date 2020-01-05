#include <stdio.h>
void main()
{
	int mat[3][3] = {3,2,9,5,6,5,2,7,2}, sum=0;

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			printf("%d\t", mat[i][j]);
		puts("");
	}
	
	for(int j=0; j<3; j++)
	{
		sum += mat[j][j];
	}
	printf("Diagonal Sum: %d\n", sum);
}
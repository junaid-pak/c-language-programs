#include <stdio.h>
void main()
{
	int mat[3][4] = {2,5,2,3,2,9,5,6,5,2,7,2},sum=0,sumC1=0,sumC2=0,sumC3=0,sumC4=0,sumR1=0,sumR2=0, sumR3=0;

	for(int i=0; i<4; i++)
	{
		sumR1 += mat[0][i];
		sumR2 += mat[1][i];
		sumR3 += mat[2][i];
	}
	for(int j=0; j<3; j++)
	{
		sumC1 += mat[j][0];
		sumC2 += mat[j][1];
		sumC3 += mat[j][2];
		sumC4 += mat[j][3];
	}

	printf("Given Matrix is: \n");

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%d\t", mat[i][j]);
			sum += mat[i][j];
		}
		puts("");
	}

	printf("Row 1 Sum: %d\n", sumR1);
	printf("Row 2 Sum: %d\n", sumR2);
	printf("Row 3 Sum: %d\n", sumR3);
	printf("Column 1 Sum: %d\n", sumC1);
	printf("Column 2 Sum: %d\n", sumC2);
	printf("Column 3 Sum: %d\n", sumC3);
	printf("Column 4 Sum: %d\n", sumC4);
	printf("Total Sum: %d\n", sum);

}
#include <stdio.h>
void main()
{
	float sum=0;

	for(int i=1; i<=10; i++)
	{
		sum += 1 / i;
	}
	printf("Sum of Series is: %f\n", sum);
}
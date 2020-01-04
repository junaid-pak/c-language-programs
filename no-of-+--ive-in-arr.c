#include <stdio.h>
void main()
{
	int COMP[] = {-5,5,2,-8,6,-3,7,-4,-6,2}, sum2=0, sum1=0;

	for(int i=0; i<10; i++)
	{
		if(COMP[i] > 0)
			sum1 += COMP[i];
		else
			sum2 += COMP[i];
	}
	printf("Sum of Positive No's is: %d\n", sum1);
	printf("Sum of Negative No's is: %d\n", sum2);

}
#include <stdio.h>
void main()
{
	int COMP[] = {-5,5,2,-8,6,-3,7,-4,-6,2,0,3,0,1,-10}, sum2=0, sum1=0, count1=0, count2=0, count3=0;

	for(int i=0; i<15; i++)
	{
		if(COMP[i] > 0)
		{
			sum1 += COMP[i];
			count1++;
		}
		else if(COMP[i] < 0)
		{
			sum2 += COMP[i];
			count2++;
		}
		else if(COMP[i] == 0)
			count3++;
	}
	printf("No of Positive No's: %d\n", count1);
	printf("No of Negative No's: %d\n", count2);
	printf("No of Zero's: %d\n", count3);
	printf("Sum of Positive No's is: %d\n", sum1);
	printf("Sum of Negative No's is: %d\n", sum2);

}
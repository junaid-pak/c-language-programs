#include <stdio.h>
void main()
{
	int arr[20] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,7,23,23,56,76};
	int count1=0, count2=0;

	for(int i=0; i<20; i++)
	{
		if(arr[i] % 2 == 0)
			count1++;
		else if(arr[i] % 2 != 0)
			count2++;
	}
	printf("Number of Even Elements: %d\n", count1);
	printf("Number of Odd Elements: %d\n", count2);
}
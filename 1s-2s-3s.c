#include <stdio.h>
void main() {
	int arr[] = {1,3,3,2,3,1,1,1,2,1,2,3}, count1=0, count2=0, count3=0;

	for(int i=0; i<12; i++)
	{
		if(arr[i] == 1)
			count1++;
		else if(arr[i] == 2)
			count2++;
		else if(arr[i] == 3)
			count3++;
	}
	printf("Number of 1S is: %d\n", count1);
	printf("Number of 2S: %d\n", count2);
	printf("Number of 3S: %d\n", count3);
}

#include <stdio.h>
void main()
{
	int number[10], smallest;

	for(int i=0; i<10; i++)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &number[i]);
	}

	smallest = number[0];

	for(int i=0; i<10; i++)
	{
		if(number[i] < smallest)
			smallest = number[i];
	}

	printf("Smallest Number is: %d\n", smallest);
	
}
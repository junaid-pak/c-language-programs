#include <stdio.h>
void main()
{
	int number[10], largest;

	for(int i=0; i<10; i++)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &number[i]);
	}

	largest = number[0];

	for(int i=0; i<10; i++)
	{
		if(number[i] > largest)
			largest = number[i];
	}

	printf("Largest Number is: %d\n", largest);
	
	for(int i=0; i<10; i++)
	{
		if(number[i] == largest)
		{
			printf("Index of %d is: %d\n", largest, i);
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int number, sum=0, average, count=0;

	while(1)
	{
		printf("Enter a Number: ");
		scanf("%d", &number);

		if(number == 0)
			exit(0);

		count++;
		sum += number;
		average = sum / count;

		printf("No of Elements Entered: %d\n", count);
		printf("Average: %d\n", average);
	}
}
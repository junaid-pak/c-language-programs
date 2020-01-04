#include <stdio.h>
void main()
{
	int number, sum=0, average, count=0;

	while(1)
	{
		printf("Enter a Number: ");
		scanf("%d", &number);
		if(number == -999)
			break;
		sum += number;
		count++;
	}
	printf("\nSum: %d\n", sum);
	average = sum / count;
	printf("Average: %d\n", average);
}
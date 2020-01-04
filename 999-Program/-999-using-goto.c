#include <stdio.h>
void main()
{
	int number, sum=0, average, count=0;

	top:
	printf("Enter a Number: ");
	scanf("%d", &number);
	
	if(number != -999)
		goto proceed;

	if(number == -999)
		goto result;

	proceed: sum += number;
	count++;
	goto top;

	result: printf("\nSum: %d\n", sum);
	average = sum / count;
	printf("Average: %d\n", average);
}
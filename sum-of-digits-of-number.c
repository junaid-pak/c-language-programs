#include <stdio.h>
void main()
{
	int number, single, sum=0, no;

	printf("Enter a Number: ");
	scanf("%d", &number);
	no = number;
	while(number != 0)
	{
		single = number % 10;
		sum += single;
		number /= 10;
	}
	printf("Sum of Digits of %d is: %d\n", no, sum);
}
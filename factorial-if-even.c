#include <stdio.h>
void main()
{
	int number, factorial=1;

	printf("Enter a Number: ");
	scanf("%d", &number);

	if(number % 2 == 0)
	{
		for(int i=1; i <= number; i++)
		{
			factorial *= i;
		}
		printf("Factorial of %d is: %d\n", number, factorial);
	}
	else
		puts("Entered Number is Not Even");
}
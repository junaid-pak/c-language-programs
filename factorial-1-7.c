#include <stdio.h>
void main()
{
	int no=1, fact, i;

	do
	{
		fact = 1;
		for(i=1; i <= no; i++)
			fact *= i;
		printf("Factorial of %d is: %d\n", no, fact);
		no++;
	} while(no <= 7);
}
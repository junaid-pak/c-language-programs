#include <stdio.h>

void main()
{
	int number, sum=0;

	for(number=1; number<=100; number++)
	{
		if((number % 3 == 0)||(number % 7 == 0))
			continue;
		else
			sum += number;
	}
	printf("Sum: %d\n", sum);
}

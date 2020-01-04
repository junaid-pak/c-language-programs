#include <stdio.h>
void main()
{
	int numbers;

	for(int i=50; i<=100; i=i+2)
	{
		if(i % 5 == 0)
			printf("%d\t", i);
	}
	puts("");
}
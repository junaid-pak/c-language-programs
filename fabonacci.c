#include <stdio.h>
void main()
{
	int no1=1, no2=1, no3;

	printf("%d\t%d\t", no1, no2);

	for(int i=1; i<7; i++)
	{
		no3 = no1 + no2;
		printf("%d\t", no3);
		no1 = no2;
		no2 = no3;
	}
	puts("");
}
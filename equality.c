#include <stdio.h>
void main()
{
	int no1, no2, no3, no4;

	printf("Enter Four Numbers(A,B,C,D): ");
	scanf("%d%d%d%d", &no1, &no2, &no3, &no4);

	if((no4 == no3) && (no2 == no1) && (no1 == no4))
		puts("All Numbers are Equal");
	else
		puts("All Numbers are Not Equal");
}
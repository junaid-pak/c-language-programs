#include <stdio.h>
void main()
{
	int arr[100];

	for(int i=0; i<100; i++)
	{
		printf("Enter Element No %d:", i+1);
		scanf("%d", &arr[i]);
	}

	printf("The Hundred Element's are:");

	for(int i=0; i<100; i++)
	{
		printf("%d\t", arr[i]);
	}
	puts("");
}
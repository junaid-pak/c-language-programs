#include <stdio.h>
void main()
{
	int arr[100] = {1,2,3,4,5,6,7,8,9,10};

	for(int i=9; i >= 0; i--)
	{
		printf("%d\t", arr[i]);
	}
	puts("");
}

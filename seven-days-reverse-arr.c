#include <stdio.h>
void main()
{
	char days[7][15] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

	for(int i=6; i>=0; i--)
	{
		printf("%s\n", days[i]);
	}
}
#include <stdio.h>
#include <stdbool.h>
void main()
{
	int single, no, cur, sum;

	for(no=2; no<=500; no++)
	{
		cur = no;
		sum = 0;
		while(cur != 0)
		{
			single = cur % 10;
			sum += single*single*single;
			cur /= 10;
		}
		if(sum == no)
			printf("%d\t", sum);	
	}
	puts("");
	
}
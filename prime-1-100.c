#include <stdio.h>
#include <stdbool.h>
void main()
{
	int up, in;
	_Bool flag;

	for(up=2; up<=100; up++)
	{
		flag = true;

		if((up < 9)&&(up > 2)&&(up % 2 == 0))
			flag = false;

		for(in=2; in<=9; in++)
		{
			if(up < 9)
				continue;
			if(up % in == 0) flag = false;

		}

		if(flag == true)
			printf("%d\t", up);
	}
	puts("");
}
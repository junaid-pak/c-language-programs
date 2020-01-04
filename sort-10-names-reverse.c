#include <stdio.h>
#include <string.h>
void main()
{
	char name[10][10] = {"ali", "bilal","yousaf","sofia","zafar","mohsin","adil","umar","danish","waqas"};
	char temp[10];
	for(int j=0; j<10; j++)
		for(int i=0; i<9; i++)
		{
			if(strcmp(name[i], name[i+1]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[i+1]);
				strcpy(name[i+1], temp);
			}
		}
	for(int i=0; i<10; i++)
		printf("%s\n", name[i]);

}
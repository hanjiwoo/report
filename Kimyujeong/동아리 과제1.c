#include <stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		if(i < 2)
		{
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
		}
		else
			for(j = 2; j <= i; j++)
			{
				printf("*");
			}
		printf("\n");
	}
}

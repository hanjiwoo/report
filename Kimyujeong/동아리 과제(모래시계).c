#include <stdio.h>
int main()
{
	int i, j, max = 6, min = 0;
	
	for(i = 1; i <= 3; i++) // for�� ���� ������ 3�� �ݺ� 
	{
		for(j = 1; j <= 5; j++) // for�� ���� ������ 5�� �ݺ�(���� Ȥ�� *) 
		{
			if(j >= max || j <= min) // ������ �����ϸ� ����, �������� ������ ��. j>=max�� �𷡽ð� ������ ����, j<= min�� ���� ������ ����ϴ� ���� 
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		max--;
		min++;
		printf("\n"); 
	} //���� �ﰢ�� 
	max++;
	min--;
	for(i = 1; i <= 2; i++)
	{
		max++;
		min--;
		for(j = 1; j <= 5; j++)
		{
			if(j >= max || j <= min)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}


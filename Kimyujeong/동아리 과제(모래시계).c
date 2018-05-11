#include <stdio.h>
int main()
{
	int i, j, max = 6, min = 0;
	
	for(i = 1; i <= 3; i++) // for문 안의 내용을 3번 반복 
	{
		for(j = 1; j <= 5; j++) // for문 안의 내용을 5번 반복(공백 혹은 *) 
		{
			if(j >= max || j <= min) // 조건을 만족하면 공백, 만족하지 않으면 별. j>=max는 모래시계 오른쪽 공백, j<= min는 왼쪽 공백을 출력하는 조건 
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
	} //위의 삼각형 
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


#include <stdio.h>
int main()
{
	int arr[5] = {0}; // 학생 5명의 성적을 저장할 배열 arr[5]를 선언 후 0으로 초기화 
	int score, i; //score: 점수, i: 학생 수 
	int sum = 0; //배열을 저장하여  평균값을 계산할  변수 sum을 선언 
	for(i=0; i<5; i++) 
	{
		printf("%d번 학생의 점수를 입력하세요: ", i+1);
		scanf("%d", &score);
		arr[i] = score;
		if(score>100)
		{		
			printf("점수가 100보다 크면 100으로 조정됩니다. %d=100\n\n", score);
			score = 100; //if를 사용하여 점수가 100보다 크면 100으로 초기화 
		}	
		else if(score<0)
		{	
			printf("점수가 0보다 작으면 0으로 조정됩니다. %d=0\n\n", score);
			score=0; //else if를 사용하여 0보다 작으면 0으로 초기화 
		}
		else
		{
			printf("\n"); //가독성을 위해서 한 줄마다 개행 
		}
		sum+=arr[i]; //변수 sum에 학생 5명의 성적을 입력한 배열 arr[i]를 더함 
	}
	printf("학생 5명의 평균은 %.2f점입니다.", (float)sum/5); //소수점 2번째 자리까지 출력하기 위해서 float로 강제형변환 
	return 0;
}

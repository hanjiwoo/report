#include <stdio.h> //<string.h>는 배열 길이 계산하는 함수 포함 
main ()
{
	int i, reck=0; 
	char voca1[100];
	char voca2;
	
	printf("영문자 입력: ");
	scanf("%s", voca1); //scanf가 공백 못 알아먹음 
	
	while(voca1[reck] != '\0') //영단어의 길이 계산 
		reck++;
	
	for(i=0; i<reck/2; i++) //영단어 뒤집기 
	{
		voca2 = voca1[i]; //앞의 문자 임시 저장 
		voca1[i] = voca1[(reck-i)-1]; //뒤의 문자를 앞으로 
		voca1[(reck-i)-1] = voca2; //앞의 문자를 뒤로 
	} 
	printf("짜잔! 영단어가 거꾸로 출력됐습니다!\n%s \n", voca1);	
}

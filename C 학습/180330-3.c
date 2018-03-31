#include <stdio.h>

int main() {
	/*
	반복문 
	for문, 이중 for문 (별찍기) 
	*/
	
	int i, j;
	
	for(i = 0; i < 10; i++) {
		printf("ㅎ\n");
	}
	
	i = 0;
	while(i < 10) {
		printf("ㅋ\n");
		i++;
	}
	
	for(i = 0; i < 5; i++) {
		for(j = i; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

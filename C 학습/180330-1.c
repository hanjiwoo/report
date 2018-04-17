#include <stdio.h>

int main() {

	/*
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b && a > c)
		printf("%d", a);
	else if(b > a && b > c)
		printf("%d", b);
	else
		printf("%d", c);
	*/
		
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b) {
		if(b > c) {
		printf("%d", c);
		}
		else{
			printf("%d",b);
		}
	}
	else if(b > a) {
		if(a > c) printf("%d", c);
		else printf("%d",a);
	}
	else
		printf("%d", c);
		
	return 0;
}

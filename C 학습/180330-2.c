#include <stdio.h>

/*switch-case ¹®*/

int main() {
	int a;
	scanf("%d", &a);
	
	switch(a) {
		case 1: case 2:
			printf("one or two");
			break;
		case 3:
			printf("three");
			break;
		default:
			printf("default");
			break;	
	}
	return 0;
}

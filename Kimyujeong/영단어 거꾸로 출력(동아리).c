#include <stdio.h> //<string.h>�� �迭 ���� ����ϴ� �Լ� ���� 
main ()
{
	int i, reck=0; 
	char voca1[100];
	char voca2;
	
	printf("������ �Է�: ");
	scanf("%s", voca1); //scanf�� ���� �� �˾Ƹ��� 
	
	while(voca1[reck] != '\0') //���ܾ��� ���� ��� 
		reck++;
	
	for(i=0; i<reck/2; i++) //���ܾ� ������ 
	{
		voca2 = voca1[i]; //���� ���� �ӽ� ���� 
		voca1[i] = voca1[(reck-i)-1]; //���� ���ڸ� ������ 
		voca1[(reck-i)-1] = voca2; //���� ���ڸ� �ڷ� 
	} 
	printf("¥��! ���ܾ �Ųٷ� ��µƽ��ϴ�!\n%s \n", voca1);	
}

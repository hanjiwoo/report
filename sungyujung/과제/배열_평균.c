#include <stdio.h>

int main()
{
    int score[5];
    double h=0;
    for(int i=0;i<5;i++)
    {
        printf("%d�� �л� ������ ���� �Է�: ",i+1);
        scanf("%d",&score[i]);
        if(score[i]>100)
            {
            printf("*- ������ 100���� ũ�� 100���� �����˴ϴ� -*\n");
            score[i]=100;
            }
        else if(score[i]<0)
            {
            printf("*- ������ 0���� ������ 0���� �����˴ϴ� -*\n");
            score[i]=0;
            }
            h+=score[i];
    }
    printf("\n\n");
    for(int i=0;i<5;i++){
    printf("%d�� �л� ����: %d\n",i+1,score[i]);
    }
    printf("���: %.2lf",h/5);
}

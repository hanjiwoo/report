#include <stdio.h>

int main()
{
    int score[5][2]={0};
    int i;
    double h=0;
    for(i=0;i<5;i++)
    {
        printf("%d�� �л� ������ ���� �Է�: ",i+1);
        scanf("%d",&score[i][0]);
        if(score[i][0]>100)
            {
            printf("*- ������ 100���� ũ�� 100���� �����˴ϴ� -*\n");
            score[i][0]=100;
            }
        else if(score[i][0]<0)
            {
            printf("*- ������ 0���� ������ 0���� �����˴ϴ� -*\n");
            score[i][0]=0;
            }
        h+=score[i][0];
    }
    for(i=0;i<5;i++)
    {
         if(score[i][0]>=90)
         {
            score[i][1]=65;
         }
         else if(score[i][0]>=80)
         {
            score[i][1]=66;
         }
         else if(score[i][0]>=70)
         {
            score[i][1]=67;

         }
         else if(score[i][0]>=60)
         {
            score[i][1]=68;
         }
         else
           score[i][1]=70;

    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
            printf("%d�� �л� ���� : %d\t",i+1,score[i][0]);
            printf("��� : %c\n",score[i][1]);
    }
    printf("��� ����: %.2lf",h/5);
}

#include <stdio.h>

int main()
{
    int n[10];
    int i;
    printf("���� 10�� �Է� : ");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);

    int max=0,min=100;
    for(i=0;i<10;i++)
    {
        if(max<n[i])
            max=n[i];
        if(n[i]<min)
            min=n[i];
    }
    printf("�ִ� : %d\n�ּڰ� : %d\n",max,min);
}

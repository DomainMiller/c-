#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand();
	int count=1,x,t;
	t=a%100;
	printf("�����Ų²����1��100�����\n");
	scanf("%d",&x);
	do
	{
		count++;
		if(x>t) printf("�²�������\n");
		else if(x<t) printf("�²�����С\n");
        scanf("%d",&x);
	}while(x!=t);
	printf("̫���ˣ���ֻ����%d�ξͲ¶���",count);
	return 0;
}
#include<stdio.h>
int main()
{
	int h1,m1,h2,m2,t1,t2,t;
	scanf("%d%d",&h1,&m1);
    scanf("%d%d",&h2,&m2);
	t1=h1*60+m1;
    t2=h2*60+m2;
	t=t2-t1;
	printf("ʱ�����%dСʱ%d����",t/60,t%60);
	return 0;
}
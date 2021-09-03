#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand();
	int count=1,x,t;
	t=a%100;
	printf("请试着猜猜这个1到100间的数\n");
	scanf("%d",&x);
	do
	{
		count++;
		if(x>t) printf("猜测结果过大\n");
		else if(x<t) printf("猜测结果过小\n");
        scanf("%d",&x);
	}while(x!=t);
	printf("太棒了，你只用了%d次就猜对了",count);
	return 0;
}
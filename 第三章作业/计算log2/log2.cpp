#include<stdio.h>
int main()
{
	int x,t;
	int ret=0;
	scanf("%d",&x);
	t=x;
	while(x>1)
	{
		x/=2;
		ret++;
	}
	printf("log2 of %d is %d",t,ret);
	return 0;
}

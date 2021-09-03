#include<stdio.h>
void main()
{
	int max(int x,int y);
	int a,b,c,d;
	scanf("%d，%d，%d",&a,&b,&c);
	d=max(a,b);
	d=max(b,c);
	printf("最大值为%d\n",d);
}
int max(int x,int y)
{
	int m;
	if(x>y) 
		m=x;
	else m=y;
	return(m);
}

#include<stdio.h>
int min(int x,int y)
{
	if(x<y) return x;
	else return y;
}
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	t=min(a,b);
	t=min(t,c);
	printf("min=%d",t);
	return 0;
}
   
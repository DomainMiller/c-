#include <stdio.h>
int f1(int a,int b)
{ 
	int t,k=1;
	if(b>a){t=a;a=b;b=t;}
	while(k!=0)
	{ 
		k=a%b;
		a=b;
		b=k; 
	}
	return a;
}
int f2(int a,int b)
{ 
	int i;
	for(i=1;i<=b;i++)
		if(i*a%b==0)break;
		return i*a;
}
int main()
{
	int x,y;
	scanf("%d,%d",&x,&y);
	printf("最大公约数=%d,最小公倍数=%d\n",f1(x,y),f2(x,y));
	return 0;
}
#include "stdio.h"
#include"math.h"
void ss(int m)
{
	int k,i;
	k=sqrt(m);
	for(i=2;i<=k;i++)
		if(m%i==0)break;
		if(i>k&&m!=1)
			printf("该数%d 是素数\n",m);
		else
			printf("该数%d 不是素数\n",m);
}
void main()
{
	int a[5],i,k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		ss(a[i]);
	}
}

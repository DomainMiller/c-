#include "stdio.h"
#include"math.h"
int ss(int m)
{
	int k,i;
	k=sqrt(m);
	for(i=2;i<=k;i++)
		if(m%i==0)break;
		if(i>k&&m!=1)
			return 1;
		else
			return 0;
}
void main()
{
	int a[5],i,k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		k=ss(a[i]);
		if(k>0)
			printf("����%d ������\n",a[i]);
		else
			printf("����%d ��������\n",a[i]);
}
}
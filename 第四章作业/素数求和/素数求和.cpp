#include<stdio.h>
int main()
{
	int m,n,x,sum,count,i,prime;
	sum=0;count=0;
	scanf("%d %d",&m,&n);
	for(x=m;x<=n;x++)
	{
		prime=1;//xÊÇËØ”µ
		for(i=2;i<x;i++)
			if(x%i==0)
			{
				prime=0;
				break;
			}
		if(prime==1)
		{
			count++;
			sum+=x;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}

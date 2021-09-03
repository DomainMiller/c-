#include<stdio.h>
int main()
{
	int a,n,i,sum=0;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		sum+=a;
		a=10*a+a%10;
	}
	printf("%d",sum);
	return 0;
}

	
#include <stdio.h>
void f1(int n)
{ 
	int i,j,k;
	for(k=1;k<=n;k++)
	{ 
		for(i=1;i<=10-k;i++)
			printf(" ");
		for(j=1;j<=k;j++)
			printf(" *");
		printf("\n");}
}
void f2(int n)
{ 
	int i,j,k;
	for(k=n;k>=1;k--)
	{
		for(i=1;i<=10-k;i++)
			printf(" ");
		for(j=1;j<=k;j++)
			printf(" *"); /*双引号内应为“空格加半角星号”*/
		printf("\n");
	}
}
main()
{ 
	int i,n;
	scanf("%d",&n);
	f1(n);
	f2(n-1);
	printf("\n");
	f2(n);
	f1(n);
}
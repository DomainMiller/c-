#include<stdio.h>
int main()
{
	int i,j,k,a;
	scanf("%d",&a);
	for(i=a;i<=a+3;i++)
	{
		printf("\n");
		for(j=a;j<=a+3;j++) 
			for(k=a;k<=a+3;k++)
				if(i!=j&&j!=k&&i!=k)
					printf("%d%d%d ",i,j,k);
	}
	return 0;
}
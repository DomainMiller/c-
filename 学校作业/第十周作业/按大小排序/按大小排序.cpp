#include<stdio.h>
int main()
{
	int num[10],t=0,k,d=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&t);
		num[i]=t;
	}
	for(int j=0;j<9;j++)
	{
		
		for(k=j+1;k<10;k++)
			if(num[k]<num[j])
			{
				d=num[j];
				num[j]=num[k];
				num[k]=d;
			}
	}
	for(k=0;k<10;k++)
		printf("%d \n",num[k]);
	return 0;
}

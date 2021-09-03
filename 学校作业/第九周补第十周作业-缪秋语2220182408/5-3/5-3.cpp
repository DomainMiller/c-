#include<stdio.h>
#include<math.h>
void main()
{
	int n=0,i,j,k;
	for(i=2;n<=30;i++)
	{	
		k = sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0)
				break;
		}
		if(j>k)
		{
			printf("%5d",i);
			n++;	
			if(n%6==0)
				printf("\n");
		}
	}
}
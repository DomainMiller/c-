#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k,num,c;
	//scanf("%d",&n);
	n=3;
	for(i=0;i<=9;i++)
		for(j=0;j<=9;j++)
			for(k=0;k<=9;k++)
			{
				num=pow(i,n)+pow(j,n)+pow(k,n);
				c=100*i+10*j+k;
				if(num==c&&num>100) 
					printf("%d\n",num);
			}				
	return 0;
}


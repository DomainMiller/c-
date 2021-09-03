#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i;
	int num=0;
	//scanf("%d",&n);
	n=3;
    for(int j=100;j<=999;j++)
	{
		i=j;
		for(int k=0;k<n;k++)
		{
			d=j%10;
	        num+=pow(d,n);
	        if(num==i) 
				printf("%d\n",num);
            j/=10;
		}
	}
	return 0;
}
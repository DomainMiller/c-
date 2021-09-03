#include<stdio.h>
int main()
{ 
	int i,x,prime;
	for(x=2;x<=100;x++)
	{
		prime=1;//xÊÇËØÊý
		for(i=2;i<x;i++)
		{
			if(x%i==0) 
			{
				prime=0;
				break;
			}
		}
		if(prime==1) printf("%d ",x);	
	}
    return 0;
}


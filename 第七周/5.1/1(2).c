#include<stdio.h>
void main()
{
	int i = 1,t = 1;
	while(i <= 10)
	{
		t *= i;
		i++;	
	}
	printf("10!=%d\n",t);

}
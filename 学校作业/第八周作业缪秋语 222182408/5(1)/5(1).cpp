#include<stdio.h>
int main()
{
	int s=0,i,sgn=1;
	for(i=1;i<=101;i+=2)
	{
		s+=sgn*i;
		sgn=-sgn;
	}
	printf("%d\n",s);
	return 0;
}

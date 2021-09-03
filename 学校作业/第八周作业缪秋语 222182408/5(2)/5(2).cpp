#include<stdio.h>
int main()
{
	double s=0,d=1;
	for(int i=3;i<=18;i+=3)
	{
		for(int j=1;j<=i;j++)
		{
			d*=j;
			//printf("*%d\n",j);
		}
		s+=d;
		//printf("%f\n",d);
		d=1;
	}
	printf("%f\n",s);
	return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,d;
	double f,e,g;
	a=3,b=4,c=3,d=a+10;
	f=(d*1.0)/2+b;
	e=(a+10)*c;
	g=(e*1.0)/f;
	printf("%.3f\n",g);
	return 0;
}
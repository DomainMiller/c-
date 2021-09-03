#include<stdio.h>
int main()
{
	int num,max,min;
	printf("num=");
	scanf("%d",&num);
	min=max=num;
	while(num!=0)
	{
		if(num>max) max=num;
		if(num<min) min=num;
		scanf("%d",&num);
	}
	printf("max=%d,min=%d\n",max,min);
}

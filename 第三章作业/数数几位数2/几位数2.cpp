#include<stdio.h>
int main()
{
	int t,i=0;
	scanf("%d",&t);
    do
	{
		t/=10;
		i++;
	}while(t>0);
	printf("%d",i);
	return 0;
}
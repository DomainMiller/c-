#include<stdio.h>
int main()
{
	int t,i=0;
	scanf("%d",&t);
	i++;
	t/=10;
    while(t>0)
	{
		t/=10;
		i++;
	}
	printf("%d",i);
	return 0;
}
#include<stdio.h>
int main()
{
	int num,t,d,i=0,deal=1;
	scanf("%d",&num);
	t=num;
	while(t>0)
	{
		i++;
		t/=10;
	}
	while(i>1)
	{
		deal*=10;
		i--;
	}
	while(num>1)
	{
	   d=num/deal;
	   if(d<=7) printf("%d",d+2);
	   else printf("%d",(d+2)%10);
	   num%=deal;
	   deal/=10;
	}
	return 0;
}
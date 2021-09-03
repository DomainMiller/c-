#include<stdio.h>
int main()
{
	char a;
	int x,init,i=0,n=0,ans=0;
    scanf("%d",&init);
	ans=init;
    while(n!=61)
	{
		scanf("%c%d",&a,&x);
		n=a;
		i++;
		if(n==42) ans*=x;
        if(n==43) ans+=x;
        if(n==45) ans-=x;
        if(n==47) ans/=x;
		if(n==61) break;
        printf("%d %c %d %d %d \n",i,a,n,x,ans);
	}
    //printf("%d",ans);
    return 0;
}


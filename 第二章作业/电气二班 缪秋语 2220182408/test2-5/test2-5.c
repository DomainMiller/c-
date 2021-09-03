#include<stdio.h>
void main()
{
	int a=7,x;
	printf("%d\n",a%2+(a+1)%2);        
	printf("%d\n",((a=4*5,a*2),a+6));  
	a=7;
	printf("%d\n",x=(a=4,6*2));       
	a=7;
	printf("%d\n",(x=a=4,6*2));       
	a=7;
	printf("%d\n",x=a%=(a/=2));      
	a=7;
	printf("%d\n",a+a%3*(int)(2.3*a)%5/4); 
}

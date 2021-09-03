#include<stdio.h>
void main()
{
	int a[] = {2,4,6,8,10},i,s = 0;
	for(i=0;i<3;i++)
		s += a[i+1];
	printf("%d\n",s);

}

#include<stdio.h>
int main()
{
	int a[] = {12,5,7,8,4};		//倒序，可以互换对称的位置
	int i,j;
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
	for(i=0;i<5/2;i++)
	{
		j = a[i];
		a[i] = a[5-i-1];
		a[5-i-1] = j;
	}
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}

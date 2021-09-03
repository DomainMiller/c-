#include<stdio.h>
int ss(int a,int b)
{
	int sum=0;
	for(int i=0;i<b;i++){
		sum+=a;
		a=a*10;
	}
	return sum;
}
int main()
{
	int x,y;
	int z;
	printf("请输入两个整数,作为a的数值和数列的项数");
	scanf("%d%d",&x,&y);
	z=ss(x,y);
	printf("数列的和为：%d",z);
	printf("\n");
	return 0;
}
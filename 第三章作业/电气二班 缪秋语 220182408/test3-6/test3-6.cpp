#include<stdio.h>
int main()
{
	float r,h,v,l;
	printf("输入数据后按回车键即可(单位cm)\n");
	printf("请输入圆柱的半径r=");
	scanf("%f",&r);
	printf("请输入圆柱的高度h=");
    scanf("%f",&h);
	printf("\n");
	l=2*3.14*r;
    v=3.14*r*r*h;
	printf("圆柱的体积v = %.2f\n",v);
	printf("圆柱的周长l = %.2f\n",l);
}
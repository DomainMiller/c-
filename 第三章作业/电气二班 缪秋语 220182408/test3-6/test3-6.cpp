#include<stdio.h>
int main()
{
	float r,h,v,l;
	printf("�������ݺ󰴻س�������(��λcm)\n");
	printf("������Բ���İ뾶r=");
	scanf("%f",&r);
	printf("������Բ���ĸ߶�h=");
    scanf("%f",&h);
	printf("\n");
	l=2*3.14*r;
    v=3.14*r*r*h;
	printf("Բ�������v = %.2f\n",v);
	printf("Բ�����ܳ�l = %.2f\n",l);
}
#include<stdio.h>
void main()
{
	char c='A';
    int a=2,b;
    float x=3.5f,y=3.2f,z;
    z=(x+1)/3+(int)x/a;
    b=x+c%3*(int)(x+y)%5/3; //ʵ������ֵ�����ͱ������Զ�ת��
    printf("%d, %f\n",b,z);
}
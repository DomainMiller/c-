#include<stdio.h>
void main()
{
	char c='A';
    int a=2,b;
    float x=3.5f,y=3.2f,z;
    z=(x+1)/3+(int)x/a;
    b=x+c%3*(int)(x+y)%5/3; //实型量赋值给整型变量会自动转换
    printf("%d, %f\n",b,z);
}
#include<windows.h>
#include <stdio.h>
void main()
{ 
	int a,b; float x,y; char m,n;
	a=3;b=7;
	x=2.7; y=2.5;
	m='h';n='d';
	printf("&a=%d, &b=%d£¬sizeof(a)=%d\n",&a,&b,sizeof(a));
	printf("&x=%d, &y=%d ,sizeof(x)=%d \n",&x,&y,sizeof(x) );
	printf("&m=%d, &n=%d,sizeof(m)=%d \n",&m,&n ,sizeof(m));
	system("pause");
}

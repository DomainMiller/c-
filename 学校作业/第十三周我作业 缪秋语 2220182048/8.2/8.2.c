#include<windows.h>
#include <stdio.h>
int main()
{
	int a=4,b=7;
	int *pa=&a,*pb=&b,*p1,*p2;
	printf("*pa=%d,*pb=%d\n",*pa,*pb); /* *pa 和*pb 应是a 和b 的值*/
	pa=pa+1;pb=pb-1;
	printf("*pa=%d,*pb=%d\n",*pa,*pb); /* *pa 和*pb 已不是a 和b 的值了*/
	pa=&a;
	p1=pa+1;p2=pa+2;
	printf("pa=%d,p1=%d,sizeof(p1-pa)=%d\n",pa,p1,sizeof(p1-pa));
// pa 为变量a 的地址，p1 是pa+1 的值，
//sizeof(p1-pa) 是p1 和pa 之间相差的字节数
	printf("p1=%d,p2=%d,sizeof(p2-p1)=%d\n",p1,p2,sizeof(p2-p1));
/* p2 是pa+2 的值, sizeof(p2-p1) 是p1 和p2 之间相差的字节数*/
	system("pause");
}
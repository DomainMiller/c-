#include <stdio.h>
#include <math.h>
void main()
{
	int sign=1,count=0; //sign 表示当前项的符号，count 表示循环次数
    double pi=0,n=1.0,term=1.0; //pi 表示多项式的值，term 表示当前项的值
    while(fabs(term)>=1e-6)
	{
		count++;
		pi=pi+term;
		n+=2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.6f\n",pi);
	printf("count=%d\n",count);
}
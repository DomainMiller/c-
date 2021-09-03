#include <stdio.h>
#include <math.h>
void main()
{
	int sign=1,count=0; //sign ��ʾ��ǰ��ķ��ţ�count ��ʾѭ������
    double pi=0,n=1.0,term=1.0; //pi ��ʾ����ʽ��ֵ��term ��ʾ��ǰ���ֵ
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
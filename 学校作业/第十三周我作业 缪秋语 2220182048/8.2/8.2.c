#include<windows.h>
#include <stdio.h>
int main()
{
	int a=4,b=7;
	int *pa=&a,*pb=&b,*p1,*p2;
	printf("*pa=%d,*pb=%d\n",*pa,*pb); /* *pa ��*pb Ӧ��a ��b ��ֵ*/
	pa=pa+1;pb=pb-1;
	printf("*pa=%d,*pb=%d\n",*pa,*pb); /* *pa ��*pb �Ѳ���a ��b ��ֵ��*/
	pa=&a;
	p1=pa+1;p2=pa+2;
	printf("pa=%d,p1=%d,sizeof(p1-pa)=%d\n",pa,p1,sizeof(p1-pa));
// pa Ϊ����a �ĵ�ַ��p1 ��pa+1 ��ֵ��
//sizeof(p1-pa) ��p1 ��pa ֮�������ֽ���
	printf("p1=%d,p2=%d,sizeof(p2-p1)=%d\n",p1,p2,sizeof(p2-p1));
/* p2 ��pa+2 ��ֵ, sizeof(p2-p1) ��p1 ��p2 ֮�������ֽ���*/
	system("pause");
}
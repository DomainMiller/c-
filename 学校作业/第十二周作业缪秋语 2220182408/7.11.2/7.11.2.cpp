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
	printf("��������������,��Ϊa����ֵ�����е�����");
	scanf("%d%d",&x,&y);
	z=ss(x,y);
	printf("���еĺ�Ϊ��%d",z);
	printf("\n");
	return 0;
}
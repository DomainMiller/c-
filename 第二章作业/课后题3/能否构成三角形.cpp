#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c&&c==a)
		{
			printf("�ȱ�������\n");
		}
		else if(a==b||b==c||c==a)
            printf("����������\n");
		else printf("һ��������\n");
	}
	else printf("���ܹ���������");
	return 0;
}
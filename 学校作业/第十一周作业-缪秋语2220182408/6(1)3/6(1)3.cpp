#include<stdio.h>
#include<string.h>
int main()
{ 
	char k[5][5],n[10];
	int i;
	printf("�������ַ�����\n");
	for(i=0;i<=4;i++)
		gets(k[i]); // Ϊk ���鸳��ֵ
	printf("����ַ�����\n");
	for(i=0;i<=4;i++) // ����ַ���
		printf("%s\n", k[i]);
	strcpy(n,k[0]); // ͨ��strcpy ��������ַ��������帳ֵ
	puts(n); // ����ַ���
	return 0;
}
#include <stdio.h>
int main()
{
	char x;
	int a=0,b=0,c=0,d=0,e=0;
	printf("������һ���ַ���");
	while((x=getchar())&&x!='\n')
	{
		if(x>='a'&&x<='z') a++;
		else if(x>='A'&&x<='Z') b++;
		else if (x==' ') c++;
		else if (x>='0'&&x<='9') d++;
		else  e++;
	}
	printf("�����ַ���Сд��ĸ��Ϊ��%d,��д��ĸ��Ϊ��%d,�ո���Ϊ��%d,������Ϊ��%d,�����ַ���Ϊ��%d,",a,b,c,d,e);
	return 0;
 } 
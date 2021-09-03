#include <stdio.h>
int main()
{
	char x;
	int a=0,b=0,c=0,d=0,e=0;
	printf("请输入一行字符：");
	while((x=getchar())&&x!='\n')
	{
		if(x>='a'&&x<='z') a++;
		else if(x>='A'&&x<='Z') b++;
		else if (x==' ') c++;
		else if (x>='0'&&x<='9') d++;
		else  e++;
	}
	printf("该行字符中小写字母数为：%d,大写字母数为：%d,空格数为：%d,数字数为：%d,其他字符数为：%d,",a,b,c,d,e);
	return 0;
 } 
#include<stdio.h>
#include<string.h>
int main()
{ 
	char k[5][5],n[10];
	int i;
	printf("请输入字符串：\n");
	for(i=0;i<=4;i++)
		gets(k[i]); // 为k 数组赋初值
	printf("输出字符串：\n");
	for(i=0;i<=4;i++) // 输出字符串
		printf("%s\n", k[i]);
	strcpy(n,k[0]); // 通过strcpy 函数完成字符串的整体赋值
	puts(n); // 输出字符串
	return 0;
}
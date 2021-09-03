#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c&&c==a)
		{
			printf("等边三角形\n");
		}
		else if(a==b||b==c||c==a)
            printf("等腰三角形\n");
		else printf("一般三角形\n");
	}
	else printf("不能构成三星形");
	return 0;
}
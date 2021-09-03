#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{ 
	int a[3][4],b[4],j,k,max;
	time_t t;
	srand(time(&t)); // 按时间重置随机数系列
	printf("\nThe original data:\n");
	for(j=0;j<3;j++) // 生成并输出随机数组
	{
		for(k=0;k<4;k++)
		{ 
			a[j][k]=rand()%50; printf("%5d ",a[j][k]);
		}
		printf("\n");
	}
	for(j=0;j<4;j++)
	{ 
		max=a[0][j];
		for(k=0;k<3;k++)
			if(a[k][j]>max)max=a[k][j];
			b[j]=max;
	}
	printf("\nThe result is:\n");
	for(j=0;j<4;j++)
		printf("%5d ",b[j]);
	printf("\n");
}

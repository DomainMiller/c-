#include "stdio.h"
void main()
{ 
	int a[3][3],i,j;
	for(i=0;i<3;i++) //二维数组元素的引用使用双重循环
		for(j=0;j<3;j++)
			a[i][j]=i+j;
		for(i=0;i<2;i++) //外重循环变量的取值决定数组第一维下标
			for(j=0;j<2;j++) //内重循环变量的取值决定数组第二维下标
				a[i+1][j+1]+=a[i][j];
			printf("%d\n", a[i][j]);
}

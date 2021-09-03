#include<stdio.h>
int main()
{   int i,j,k,m=5,n[5]={12,17,25,34,56};
	  for(i=0;i<m;i++)
		  printf("%4d",n[i]);
		  scanf("%d",&k);
		  for(i=0;i<m;i++)                       
			if(k==n[i])                          /* 确定要删除数据位置 i */
			{     for(j=i;j<m-1;j++)   /*前移数据*/
				n[j]=n[j+1];
			      break;}                              /*删除后跳出循环 */
		  if(i>=m) 
                     /*如未找到删除数据，循环变量i的值一定大于循环终值*/
			printf("data not found!\n");
		  else
			{ printf("The last data:" );     /*输出删除后结果*/
			  for(i=0;i<m-1;i++)
			     printf("%4d",n[i]);
			  printf("\n"); 
		  }
	return 0;
} 

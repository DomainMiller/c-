#include<stdio.h>
int main()
{   int i,j,k,m=5,n[5]={12,17,25,34,56};
	  for(i=0;i<m;i++)
		  printf("%4d",n[i]);
		  scanf("%d",&k);
		  for(i=0;i<m;i++)                       
			if(k==n[i])                          /* ȷ��Ҫɾ������λ�� i */
			{     for(j=i;j<m-1;j++)   /*ǰ������*/
				n[j]=n[j+1];
			      break;}                              /*ɾ��������ѭ�� */
		  if(i>=m) 
                     /*��δ�ҵ�ɾ�����ݣ�ѭ������i��ֵһ������ѭ����ֵ*/
			printf("data not found!\n");
		  else
			{ printf("The last data:" );     /*���ɾ������*/
			  for(i=0;i<m-1;i++)
			     printf("%4d",n[i]);
			  printf("\n"); 
		  }
	return 0;
} 

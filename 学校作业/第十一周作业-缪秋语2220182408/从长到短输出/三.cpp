#include<stdio.h>
#include<string.h>
int main()
{
	char c[5][50],t[50];
	int i,j,l[2][5],s;
	for(i=0;i<5;i++)
	{
		printf("Please input string No.%d: ",i+1);
		gets(c[i]);
	}
	for(i=0;i<4;i++)
	{
		s=i;
		for(j=i+1;j<=4;j++)
			if(strlen(c[s])>strlen(c[j])) s=j;
		strcpy(t,c[i]);
	    strcpy(c[i],c[s]);
	    strcpy(c[s],t);
	}
	for(i=0;i<=4;i++)
		puts(c[i]);
	printf("\n");
	return 0;
}


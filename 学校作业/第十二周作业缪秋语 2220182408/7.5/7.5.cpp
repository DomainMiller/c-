#include <stdio.h>
#define N 3
#define M 4
int num(int x[N][M])
{
	int i,j,p=0;
	for(i=0; i<N;i++)
		for(j=0;j<M;j++)
			if(x[i][j]!=0) p++;
			return (p);
}
void main()
{
	int x[N][M]={{1,0,7,0},{2,6,0,3},{8,0,3,0}};
	printf("n=%d\n",num(x)) ;
}


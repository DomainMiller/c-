#include<stdio.h>
int main()
{
	int cnt=0,i=1,j=1;
	double sum=(i+j)/j;
	for(cnt=0;cnt<19;cnt++)
	{
        j=i+j;
		i=i+j;
		sum+=(double)i/j;
		//printf("%d/%d\n",i,j);
	}
	printf("%f\n",sum);
	return 0;
}



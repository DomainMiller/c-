#include <stdio.h>
#define N 10
void main()
{
	char a[N], k,max,min,imax,imin;
	for(k=0;k<N;k++)
		scanf("%s",&a[k]);
	max=a[0];min=a[0];imax=0;imin=0;      
        for(k=1;k<N;k++)
		{  
			if(a[k]>max){ max=a[k];imax=k;}
            if(a[k]<min){ min=a[k]; imin=k;} 
		}
		printf("max=a[%d]=%d, min=a[%d]=%d\n",imax,max,imin,min);
} 

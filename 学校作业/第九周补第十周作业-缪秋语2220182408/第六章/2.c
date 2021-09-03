#include<stdio.h>
void main()
{
	int a[80] = {2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10},j,n = 19,k = 1;
	printf("The original data:\n");
	for(j=0;j<n;j++)
		printf("%3d",a[j]);
	for(j=1;j<n;j++)
		if(a[k-1] != a[j])
			a[k++] = a[j];
	printf("\nThe data after deleted:\n");
	for(j=0;j<k;j++)
		printf("%3d",a[j]);
	printf("\n");

}
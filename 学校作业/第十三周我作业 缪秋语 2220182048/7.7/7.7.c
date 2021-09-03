#include<stdio.h>
int max,min;
int func(int a[], int n)
{
	int i,sum = a[0];
	float avg;
	max = a[0];
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
		if(a[i]<min)
			min = a[i];
		sum += a[i];
	}
	avg = sum/n;
	return avg;
}
void main()
{
	float average;
	int i,b[10];
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	average = func(b,10);
	printf("max = %d,min = %d,average = %.2f\n",max,min,average);

}
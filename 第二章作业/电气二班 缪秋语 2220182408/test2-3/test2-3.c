#include <stdio.h>
void main()
{
    int i,j,m,n;
    i=3;
    j=5;
    m=++i;//赋值时i已加1
    n=j++;//赋值时j未加1
    printf("%d,%d,%d,%d\n",i,j,m,n);//赋值后ij均已加1
}

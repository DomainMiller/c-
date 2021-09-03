#include <stdio.h>
int main()
{
    int a[8];
    while (1) {
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            scanf("%d", &mountain_h);
            a[i]=mountain_h;
        }
        int max=0;
        for(int j=0;j<=7;j++)
        {
            for(int k=0;k<=7;k++)
            {
                if(a[k]>a[max]) max=k;
            }
            printf("%d\n",max);
			a[max]=a[max]-3;
		}
    return 0;
	}
}

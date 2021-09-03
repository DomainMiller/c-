#include<stdio.h>
int main()
{
	int num,i,j;
	int n=0,mask=1;
	scanf("%d",&num);
	if(num<0)
	{
		printf("fu ");
		num=-num;
	}
	n=num;
	while(num>9)
	{
		num/=10;
		mask*=10;
	}
	for(j=0;n>=0;j++)
	{
	
		i=n/mask;
	    switch(i)
		{
	        case 0:
                printf("ling ");
	            break;
            case 1:
		        printf("yi ");
	            break;
	        case 2:
		        printf("er ");
	            break;
            case 3:
		        printf("san ");
	            break;
            case 4:
		        printf("si ");
	            break;
            case 5:
		        printf("wu ");
	            break;
	        case 6:
		        printf("liu ");
	            break;
			case 7:
				printf("qi ");
				break;
			case 8:
				printf("ba ");
			    break;
			case 9:
				printf("jiu ");
				break;
		}
        n%=mask;
		mask/=10;
	}
	return 0;
}


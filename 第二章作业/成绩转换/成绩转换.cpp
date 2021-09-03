#include<stdio.h>
int main()
{
	int goal,standard;
	scanf("%d",&goal);
    standard=goal/10;
	switch(standard)
	{
	case 10:
	case 9:
		printf("A\n");
	    break;
	case 8:
		printf("B\n");
	    break;
    case 7:
		printf("C\n");
	    break;
    case 6:
		printf("D\n");
	    break;
	default:
		printf("F\n");
	    break;
	}
	return 0;
}


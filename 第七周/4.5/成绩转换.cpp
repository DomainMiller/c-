#include<stdio.h>
int main()
{
	int score;
	while(1)
	{
		scanf("%d",&score);
		switch((int)(score/10))
		{
		case 10:
			if (score > 100){
				printf("�����������100��С��1�����ݣ����������룡\n");
				break;
			}
			else{
				printf("A��\n");break;
			}
        case 9:
			printf("A\n");break;
		case 8:
			printf("B\n");break;
        case 7:
			printf("C\n");break;
		case 6:
			printf("D\n");break;
		case 5:	
		case 4:			
		case 3:			
		case 2:		
		case 1:
			printf("E��\n");break;
		case 0:
			if (score < 1)
			{
				printf("�����������100��С��1�����ݣ����������룡\n");
				break;
			}
			else
			{
				printf("E��\n");break;
			}
			default:
				printf("�����������100��С��1�����ݣ����������룡\n");
		}
	}
	return 0;
}





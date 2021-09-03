#include <stdio.h>
#include<string.h>
void main()
{ 
	char str[18],c;
	gets(str);
	//str[]={"I am a good boy"};
	int num, i=0;
	printf("\nPlease input a number:");
	scanf("%c", &c);
	while(str[i]!='\0')
		if(str[i]==c)
			num++;
		printf("Have %d character %c in str",num,c);
}

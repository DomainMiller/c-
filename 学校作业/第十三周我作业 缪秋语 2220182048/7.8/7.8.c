#include<stdio.h>
void fi()
{
	static int i = 10;
	printf("i=%d\n",i);
	i = i + 10;
}
void fj()
{
	static int j;
	j = 10;
	printf("j=%d\n",j);
	j = j + 10;
}
void fk()
{
	int k = 10;
	printf("k=%d\n",k);
	k = k + 10;
}
void main()
{
	fi();
	fi();
	fi();
	
	fj();
	fj();
	fj();

	fk();
	fk();
	fk();
}
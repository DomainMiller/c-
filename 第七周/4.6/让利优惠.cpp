#include<stdio.h>
void main()
{
	float buy,pay,money;
	int h;
	printf("请输入购买金额：\n");
	scanf("%f",&buy);
	h = (int) buy / 100.0;
	switch(h)
	{
		case 0:pay = buy;money = buy - pay;break;
		case 1:pay = buy * 0.985;money = buy - pay;break;
		case 2:pay = buy * 0.975;money = buy - pay;break;
		case 3:pay = buy * 0.965;money = buy - pay;break;
		case 4:pay = buy * 0.955;money = buy - pay;break;
		case 5:pay = buy * 0.945;money = buy - pay;break;
		default:pay = buy * 0.94;money = buy - pay;break;
	}
	printf("您本次购买金额为：%.2f,实际应付金额为：%.2f,返还金额为：%.2f\n",buy,pay,money);
	printf("欢迎下次光临！\n");
}

#include<stdio.h>
void main()
{
	float buy,pay,money;
	int h;
	printf("�����빺���\n");
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
	printf("�����ι�����Ϊ��%.2f,ʵ��Ӧ�����Ϊ��%.2f,�������Ϊ��%.2f\n",buy,pay,money);
	printf("��ӭ�´ι��٣�\n");
}

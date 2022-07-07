#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int price = 0;
	printf("欢迎来到徐晗逸杂货铺！\n");      
	int A;
	printf("请输入所交金额");
	scanf("%d", &A);
	const int AMOUNT = A;
	int price = 0; 
    printf("请输入商品金额（元）");
	scanf("%d", &price);
	int j;
	printf("现在搞活动，全场九折！");
	printf("现价：%d\n", j = price * 0.9);              
	int charge = AMOUNT - j;
	printf("找您%d元\n", charge);
     return 0;

}



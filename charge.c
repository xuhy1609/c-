#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int price = 0;
	printf("��ӭ�����������ӻ��̣�\n");      
	int A;
	printf("�������������");
	scanf("%d", &A);
	const int AMOUNT = A;
	int price = 0; 
    printf("��������Ʒ��Ԫ��");
	scanf("%d", &price);
	int j;
	printf("���ڸ���ȫ�����ۣ�");
	printf("�ּۣ�%d\n", j = price * 0.9);              
	int charge = AMOUNT - j;
	printf("����%dԪ\n", charge);
     return 0;

}



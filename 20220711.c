#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*int x;
	int ret = 0;
	scanf("%d", &x);
	int t = x;
		while (x > 1) {
			x /= 2;
			ret++;
		}
		printf("log2 of %d is %d", t, ret);*/

	/*int x = 3;
	while (x > 0) {
		printf("%d ", x);
		x--;

	}
	printf("���䣡");
*/

	//srand(time(0));
	//int number = rand() % 100 + 1;
	//int count = 0;
	//int a = 0;
	//printf("���Ѿ������һ��1��100֮�������");
	//do {
	//	printf("��²��������");
	//	scanf("%d", &a);
	//	count++;
	//	if (a > number) {
	//		printf("��µ������ˡ�");
	//	}
	//	else if (a < number) {
	//		printf("��µ���С�ˡ�");
	//	}

	//	
	//} while (a != number);
	//printf("̫���ˣ�������%d�ξͲµ��˴𰸣�\n", count);


	//int number;
	//int count = 0;
	//int sum = 0;
	//do {
	//	scanf("%d", &number);
	//	if (number != -1) {
	//		count++;
	//		sum += number;
	//	}
	//	
	//} while (number != -1);
	//printf("%f\n", 1.0*sum / count);

	//
	//
	//
	//int number;
	//int count = 0;
	//int sum = 0;
	//scanf("%d", &number);
	//while(number != -1) {
	//	count++;
	//	sum += number;
	//	scanf("%d", &number);
	//}
	//printf("%f\n", 1.0 * sum / count);


	//int x;
	//int digit = 0;
	//int ret = 0;
	//scanf("%d", &x);
	//while (x != 0) {
	//	digit = x % 10;
	//	x /= 10;
	//	printf("%d", digit);
	//	ret = ret * 10 + digit;
	//}
	///*printf("%d", ret);*/



	int x=0;
	scanf("%d", &x);
	
	for (int n = 1;x>=n; n++) {
		x *= n;
	}
	printf("%d", x);

	return 0;
}

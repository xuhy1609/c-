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
	printf("发射！");
*/

	//srand(time(0));
	//int number = rand() % 100 + 1;
	//int count = 0;
	//int a = 0;
	//printf("我已经想好了一个1到100之间的数。");
	//do {
	//	printf("请猜猜这个数：");
	//	scanf("%d", &a);
	//	count++;
	//	if (a > number) {
	//		printf("你猜的数大了。");
	//	}
	//	else if (a < number) {
	//		printf("你猜的数小了。");
	//	}

	//	
	//} while (a != number);
	//printf("太好了，你用了%d次就猜到了答案！\n", count);


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

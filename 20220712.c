#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	/*int x=2;
	int p=0 ;
	while (p< 50) {
		int i;
		int q = 1;
		for (i = 2; x > i; i++) {
			if (x % i == 0) {
				q = 0;
			}

		}
		if (q == 1) {
			p++;
			printf("%d \t ", x);
			if (p % 5 == 0) {
				printf("\n");
			}

		}x++;
		
	}*/


	/*int x;
	int q = 0;
	int one, two, five;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + two * 2 + five + 5 == x * 10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					
				
					

				}
			}
			
		}
		
	}*/

	/*int n;
	scanf("%d", &n);
	int i;
	double sum = 0;
	double sign=1.0;
	for (i = 1;  i<=n ; i++) {
		sum += sign /i;
		sign = -sign;

	}
	printf("f(%d)=%f", n, sum);*/



	int x;
	scanf("%d", &x);
	int mask=1;
	int t = x;
	while (t>9) {
		t /= 10;
		mask *= 10;
	}
	do {
		int d = x / mask;
		printf("%d ", d);
		if (mask > 9) {
			printf("");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");

	return 0;
}
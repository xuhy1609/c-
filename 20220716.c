#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
//	int number, n;
//	int inp;
//	int cnt = 0;
//	int finished = 0;
//	scanf("%d %d", &number, &n);
//	do {
//		scanf("%d", &inp);
//		cnt++;
//		if (inp < 0) {
//			printf("Game over\n");
//			finished = 1;
//		}else if (inp < number) {
//			printf("Too small\n");
//		}else if (inp > number) {
//			printf("Too big\n");
//		}
//		else {
//			if (cnt == 1) {
//				printf("Bingo!\n");
//			}else if (cnt <= 3) {
//				printf("Lucky you!\n");
//			}else {
//				printf("Good Guess!\n");
//			}
//			finished = 1;
//		}
//		if (cnt == n) {
//			if (!finished) {
//				printf("Game over\n");
//				finished = 1;
//			}
//		}
//	} while (!finished);
//
//
//
//



	int i;
	double dividend, divisor;
	double sum = 0.0;
	int n;
	double t;
	scanf("%d", &n);
	dividend = 2; divisor = 1;
	for   (i = 1; i <= n; i++) {
		sum += dividend / divisor;
		t = dividend;
		dividend = dividend + divisor;
		divisor = t;
	}
	//printf("%f %f\n", dividend, divisor);
	printf("%.2f\n",sum);

return 0;

}
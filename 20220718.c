#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdbool.h>
int isPrime(int i) {
	int ret = 1;
	int k;
	for (k = 2; k < i - 1; k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

void sum1(int begin, int end) {
	int i;
	int sum = 0;
	for (i = begin ; i <= end; i++) {
		sum += i;
	}
	printf("%d到%d的和是%d\n", begin, end, sum);

}

int max(int a, int b) {
	int ret;
	if (a > b) {
		ret = a;
	}
	else {
		ret = b;
	}
	return ret;
}

int main() {
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;
	scanf("%d %d", &m, &n);
	if (m == 1)m = 2;
	for (i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i; 
			cnt++;
		}

	}
	printf("%d %d\n",cnt,sum );



	sum1(10, 20);
	sum1(30, 40);
	sum1(100, 110);

	int a, b, c;
	a = 5;
	b = 6;
	c = max(10, 12);
	c = max(a, b);
	c = max(c, 23);
	c = max(max(c, a), 5);
	printf("%d\n", c);
	printf("%d\n", max(a, b));

	return 0;
}
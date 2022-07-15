#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int m, n;
	
	int sum=0;
	int cnt=0,q=1;
	scanf("%d %d", &m, &n);
	for ( int x = m; x <= n; x++) {
		int i = 2;
		while (i < x) {
			if (x % i == 0) {
				q = 0;
			}
			else (q = 1); 
			i++;
		}if (q = 1) {
				cnt++;
				sum += x;
			}
	}
	printf("%d %d", cnt, sum);
	
	return 0;
}
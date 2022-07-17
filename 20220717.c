#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {

	int a = 6;
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(long long)=%ld\n", sizeof(long long));

	int c = 255;
	char r = 255;
	printf("c=%d,r=%d\n", c, r);
	//int c:
	//00000000 00000000 00000000 11111111
	//char r:
	//11111111

	double ff = 1234.5678;
	printf("%lf %e %.3f\n", ff, ff,ff);


	printf("123\b12345\n456\n");
	return 0;

}
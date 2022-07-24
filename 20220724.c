#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a = 10;
	printf("sizeof(a)=%lu\n", sizeof(a));

	int a[10];
	int b[10];
	a = b;

}
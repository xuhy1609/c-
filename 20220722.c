#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//void f(int* p);
//void g(int k);
int divide(int a, int b, int* result);
void swap(int* pa, int* pb);
void minmax(int a[], int len, int* max, int* min);
int main(void) {
	/*int a[3][5];
for (int i = 0; i < 3; i++) {
	for (int j = 0; i < 5; j++) {
		a[i][j] = i * j;
		}
	}

int b = 5;


const int x = b;
int a[3][x];
for (int i = 0; i < 3; i++) {
	for (int j = 0; i < 5; j++) {
		a[i][j] = i * j;*/
	/*}
}*/


	const int size = 3;
	int board[size][size];
	int i, j;
	int numofx;
	int numof0;
	int result = -1;   //-1 没人赢 1 x赢 0 0赢


读入矩阵
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

检查行
	for (i = 0; i < size && result == -1; i++) {
		numof0 = numofx = 0;
		for (j = 0; j < size; j++) {
			if (board[i][j] == 1) {
				numofx++;
			}
			else {
				numof0++;
			}
		}
		if (numof0 == size) {
			result = 0;
		}else if (numofx == size) {
			result = 1;
		}
	}
	检查列
	if (result == -1) {
		for (j = 0; j < size && result == -1; j++) {
			numof0 = numofx = 0;
			for (i = 0; i < size; i++) {
				if (board[i][j] == 1) {
					numofx++;
				}
				else {
					numof0++;
				}
			}
			if (numof0 == size) {
				result = 0;
			}else if (numofx == size) {
				result = 1;
			}
		}
	}
	检查对角线



	int i;
	int a[10];
	printf("%x\n", &i);
	printf("%p\n", &i);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);

	/*int i = 6;
	printf("&i=%p\n", &i);
	f(&i);
	g(i);

*/


	/*int a = 4;
	int b = 6;
	swap(&a, &b);
	printf("a=%d,b=%d", a, b);*/

	
	
	int a[] = { 1,2,3,4,5,6,78,9,5,4,6,545,6,8,5,4,655,4,56,5,4, };
	int max, min;
	minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("min=%d,max=%d", min, max);
	return 0;

int a = 5;
int b = 0;
int c;
if (divide(a, b, &c)) {
	printf("%d/%d=%d\n", a, b, c);

	}
return 0;
}


void f(int* p) {
	printf("p=%p\n", &p);
	printf("*p=%d\n", *p);
	*p = 26;
}


void g(int k) {
	printf("k=%d\n", k);
}

void swap(int* pa, int* pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}


void minmax(int a[], int len, int* max, int* min) {
	int i;
	*min = *max = a[0];
	for (i = 0; i < len; i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}
}


int divide(int a, int b, int* result) {
	int ret = 1;
	if (b == 0)ret = 0;
	else {
		*result = a / b;
	}
	return ret;
}
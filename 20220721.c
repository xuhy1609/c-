#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search(int key, int a[], int length);
int main(void) {
	
	/*int x;
	int count[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1) {
		if (x >= 0 && x <= 9) {
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i < 10; i++) {
		printf("%d:%d\n", i, count[i]);
	}*/

	int a[] = { 2,4,6,7,1,3,5,9,11,13,23,14,32 };
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);
	loc = search(x, a, sizef(a) / sizef(a[0]));
	if (loc != -1) {
		printf("%d在%d个位置上\n",x, loc);
	}
	else {
		printf("%d不存在\n", x);
	}

	return 0;
	
}




int search(int key, int a[], int length) {
	int ret = -1;
	int i;
	for (i = 0; i < length; i++) {
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;

}


int isPrime
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int i = 0;
	scanf_s("%d", &i);
	if (i % 2 == 0)
		printf("��������");
	else
		printf("ʽ����");

	return 0;
}
#include<stdio.h>

void main() {
	int a;
	scanf_s("%d", &a);
	printf("%.1f", (double)a * 1.8 + 32);
}
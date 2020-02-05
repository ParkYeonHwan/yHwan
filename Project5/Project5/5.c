#include<stdio.h>

void main() {
	int a, b;
	double sum;
	scanf_s("%d %d", &a, &b);
	sum = (double)a * (double)b / 2;
	printf("%.2f", sum);
}
#include<stdio.h>

void main() {
	int a, b, c, d;
	double ave;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	ave = (double)a + (double)b + (double)c + (double)d;
	ave = ave / 4;

	printf("%.2f", ave);
}
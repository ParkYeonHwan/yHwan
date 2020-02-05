#include<stdio.h>

void main() {
	int a, b;
	int c1, c2, c3;
	scanf_s("%d", &a);
	b = 1000 - a;
	c1 = b / 100;
	c2 = (b - 100 * c1) / 50;
	c3 = (b - 100 * c1 - 50 * c2) / 10;
	printf("%d %d %d", c1, c2, c3);
}
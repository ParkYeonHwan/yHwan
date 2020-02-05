#include<stdio.h>

void main() {
	int a;
	int d, h, m, s;
	scanf_s("%d", &a);
	d = a / 86400;
	h = (a - (d * 86400)) / 3600;
	m = (a - (d * 86400) - (h * 3600)) / 60;
	s = (a - (d * 86400) - (h * 3600) - (m * 60));
	printf("%d %d %d %d", d, h, m, s);
}
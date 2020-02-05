#include<stdio.h>

void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int c1 = b % 10;
	int c2 = ((b - c1) % 100)/10;
	int c3 = (b - c1 - c2*10)/ 100;

	int fir = a * c1;
	int sec = a * c2;
	int thi = a * c3;
	int sum = fir + sec * 10 + thi * 100;
	printf("%d\n%d\n%d\n%d", fir, sec, thi, sum);
}
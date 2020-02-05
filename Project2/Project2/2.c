#include<stdio.h>

void main() {
	int min;
	scanf_s("%d", &min);

	printf("%d minutes is %d seconds.", min, min * 60);
}
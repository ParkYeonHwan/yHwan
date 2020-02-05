#include<stdio.h>

void main() {
	int h1, m1, s1;
	int r;
	scanf_s("%d %d %d", &h1, &m1, &s1);
	scanf_s("%d", &r);

	int h2 = r / 3600;
	int m2 = (r - 3600 * h2) / 60;
	int s2 = (r - 3600 * h2 - 60 * m2);

	int hr = h1 + h2;
	int mr = m1 + m2;
	int sr = s1 + s2;
	
	if (sr > 59) {
		mr += 1;
		sr %= 60;
	}

	if (mr > 59) {
		hr += 1;
		mr %= 60;
	}

	if (hr > 23) {
		hr %= 24;
	}

	printf("%d %d %d", hr, mr, sr);
}
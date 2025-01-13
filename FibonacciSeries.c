#include <stdio.h>

void series(a) {
	int i, sum1 = 1, sum2 = 0;
	printf("0");
	for(i=1; i<=a; i++) {
		printf(", %d", (i+1));
	}
}

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	series(n);
}

#include <stdio.h>

void swap(int *x, int*y) {
	int t = *x;
	*x = *y;
	*y = t;
	printf("Value of formal Parameters = %d\t%d", *x, *y);
}

int main() {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("\nValue of actual parameters = %d\t%d", a, b);
}

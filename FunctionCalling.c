#include <stdio.h>

void swap(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
	printf("\nValue of formal parameter = %d\t%d", x, y);	
}

int main() {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("\nValue of actual parameter = %d\t%d", a, b);
	return 0;
}

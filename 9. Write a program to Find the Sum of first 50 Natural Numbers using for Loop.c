#include <stdio.h>

int main() {
	int i, sum = 0;
	for(i=1; i<=50; i++) {
		sum += i;
	}
	printf("The sum of first 50 natural numbers is: %d", sum);
	
	return 0;
}

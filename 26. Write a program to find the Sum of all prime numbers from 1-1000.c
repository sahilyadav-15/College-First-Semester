#include <stdio.h>

int main() {
	
	int i, j, sum = 2;
	printf("2");
	
	for(i=3; i<=1000; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0) {
				break;
			}
		}
		if(j==i) {
			printf(" + %d", i);
			sum += i;
		}
	}
	printf("\n\nThe total sum is %d\n", sum);
	
	return 0;
}

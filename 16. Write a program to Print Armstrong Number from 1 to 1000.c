#include <stdio.h>

int main() {
	int num, n, i, j, sum;
	
	for(i=1; i<=1000; i++) {
		n = i;
		sum = 0;
		while(n>0) {
			j = n%10;
			sum += j*j*j;
			n /= 10;
		}
		
		if(sum==i) printf("\n%d is an armstrong number.\n", i);
}
	
	return 0;
}

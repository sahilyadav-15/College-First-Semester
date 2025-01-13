#include <stdio.h>

int main() {
	int n, j, sum, num;
	printf("Enter n: ");
	scanf("%d", &num);
	
	sum = 0;
	n = num;
	while(n>0) {
		j = n%10;
		sum += j*j*j;
		n /= 10;
	}
		
	if(sum==num) printf("\n%d is an armstrong number.\n", num);
	else printf("\n%d is not an armstrong number.\n", num);
	
	return 0;
}

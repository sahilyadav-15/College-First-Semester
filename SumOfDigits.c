// Sum of digits;
#include <stdio.h>

int main() {
	int i, num, sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num>0) {
		sum = sum+num%10;
		num = num/10;
	}
	printf("Sum of it's digits is %d", sum);
}

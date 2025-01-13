#include <stdio.h>

int main() {
	
	int i, num;
	printf("Checking prime or not. Enter a negative number to exit.\n");
	
	while(num>0) {
		printf("Enter a number: ");
		scanf("%d", &num);
		
		for(i=2; i<num; i++) {
			if(num%i==0) {
				break;
			}
		}
		
		if(i==num) {
			printf("%d is a prime number.\n", num);
		}
		else {
			printf("%d is not a prime number.\n", num);
		}
	}
	
	return 0;
}

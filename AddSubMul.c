#include <stdio.h>
int result = 0;

findResult() {
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(n>0 && n<11) {
		result = result + n;
		findResult();
	}
	else if(n>10 && n<21) {
		result = result - n;
		findResult();
	}
	else if(n>20 && n<31) {
		result = result * n;
		findResult();
	}
	else printf("\nTotal result is %d", result);
	return 0;
}

int main() {
	printf("For adding: 1 to 10\nFor Substracting: 11 to 20\nFor multiplication: 21 to 30\nFor exit: Any other digit.\n\n");
	findResult();
}

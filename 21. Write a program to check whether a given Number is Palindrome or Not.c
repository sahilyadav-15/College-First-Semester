#include <stdio.h>
#include <math.h>

int main() {
	int n, num, reverseNum = 0, count = 0, i;
	
	printf("Checking a number is Palindrome or Not.\nEnter a number: ");
	scanf("%d", &num);
	
	n = num;
	while(n>0) {
		n /= 10;
		count++;
		i++;
	}
	
	n = num;
	i = 0;
	while(n>0) {
		reverseNum += (n%10)*pow(10, count - i - 1);
		n /= 10;
		i++;
	}
	
//	printf("%d", reverseNum);
	
	if(reverseNum==num) printf("%d is a Palindrome number.\n", num);
	else printf("%d is not a Palindrome number.\n", num);
	
	return 0;
}

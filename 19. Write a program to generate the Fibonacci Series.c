#include <stdio.h>

int main() {
	int i, n, curr, prev1 = 1, prev2 = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		if(i>2) {
			curr = prev1 + prev2;
			prev2 = prev1;
			prev1 = curr;
			printf("%d ", curr);
		}
		else if(i==2) {
			printf("%d ", prev1);
		}
		else if(i==1) {
			printf("%d ", prev2);
		}
	}
	
	return 0;
}

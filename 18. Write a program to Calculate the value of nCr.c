#include <stdio.h>
#include <math.h>

int main() {
	int n, r, i;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);
	
	int n_r = n-r, n_=1, r_=1, n_r_ = 1;
	
	for(i=1; i<=n; i++) {
		n_ *= i;
	}
	for(i=1; i<=r; i++) {
		r_ *= i;
	}
	for(i=1; i<=n_r; i++) {
		n_r_ *= i;
	}
	
	printf("%dC%d = %d", n, r, n_/(r_*n_r_));
	
	return 0;
}

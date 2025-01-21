#include <stdio.h>

int main() {
	
	int i, j;
	
	for(i=50; i<=500; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0) {
				break;
			}
		}
		if(j==i) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}

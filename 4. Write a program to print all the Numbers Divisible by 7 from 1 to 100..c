#include <stdio.h>

int main() {
	int i;
	printf("All numbers upto 100 divisible by 7 are:\n");
	for(i=1; i<=100; i++) {
		if(i%7==0) printf("%d\n", i);
	}
}

// Reversing an array

#include <stdio.h>

int main() {
	int i, j, temp, arr[5];
	
	for(i=0; i<5; i++) {
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nBefore reversing:\n");
	
	for(i=0; i<5; i++) {
		printf("Element %d = %d\n", i+1, arr[i]);
	}
	
	for(i=0, j=4; i<j; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	printf("\nAfter reversing:\n");
	
	for(i=0; i<5; i++) {
		printf("Element %d = %d\n", i+1, arr[i]);
	}
}

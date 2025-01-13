#include <stdio.h>

int main() {
	
	int n, i, j, temp;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0; i<n; i++) {
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nAfter swapping:\n");
	
	for(i=0; i<n; i++) {
		printf("Element %d: %d\n", i+1, arr[i]);
	}
	
	return 0;
}

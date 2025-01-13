// Understanding arrays
#include <stdio.h>

int main() {
	int n, i, sum=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0; i<n; i++) {
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nThe elements are:");
	for(i=0; i<n; i++) {
		printf("\nElement %d: %d", i+1, arr[i]);
		sum = sum + arr[i];
	}
	printf("Element %d = %d", i+1, arr[i]);
}

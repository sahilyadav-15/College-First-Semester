#include <stdio.h>

int main() {
	
	int size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	int arr[size], i, num;
	
	printf("Enter the elements of the array.\n");
	for(i=0; i<size; i++) {
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nSearching for: ");
	scanf("%d", &num);
	
	for(i=0; i<=size; i++) {
		if(num==arr[i]) {
			printf("\nEntered number, %d, found at Element %d", num, i+1);
			break;
		}
	}
	
	if(i==size) printf("\nEntered number, %d, is not in the array.", num);
	
	return 0;
}

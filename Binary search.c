#include <stdio.h>

int main() {
	
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int arr[size], i, key;
	
	printf("Enter the elements of the array:\n");
	for(i=0; i<size; i++) {
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int left = 0, right = size-1, mid;
	
	printf("Enter the element you want to search: ");
	scanf("%d", &key);
	
	while(left<=right) {
		mid = (left + right)/2;
		
		if(arr[mid] == key) {
			printf("Element found at index %d\n", mid);
			break;
		}
		else if(arr[mid] < key) {
			printf("Mid is lower than key\n");
			left = mid + 1;
		}
		else {
			printf("Mid is higher than key\n");
			right = mid - 1;
		}
	}
		
	return 0;
}

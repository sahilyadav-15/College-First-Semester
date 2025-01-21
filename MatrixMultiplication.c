#include <stdio.h>

int main() {
	printf("Matrix Multiplication\n");
	
	int row1, row2, column1, column2, i, j;
	
	printf("For the first matrix, A.\n");
	printf("Number of rows: ");
	scanf("%d", &row1);
	printf("Number of columns: ");
	scanf("%d", &column1);
	printf("\n");
	int a[row1][column1];
	for(i=0; i<row1; i++) {
		for(j=0; j<column1; j++) {
			printf("Enter element(%d,%d): ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("For the second matrix, B.\n");
	printf("Number of rows: ");
	scanf("%d", &row2);
	printf("Number of columns: ");
	scanf("%d", &column2);
	printf("\n");
	int b[row2][column2];
	for(i=0; i<row2; i++) {
		for(j=0; j<column2; j++) {
			printf("Enter element(%d,%d): ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}
	
	if(column1 != row2) {
		printf("The number of columns in first matrix should be equal to the number of rows in second column.\n");
		printf("Try again!\n");
		main();
	}
	else {
		int product[row2][column1];
		for(i=0; i<row1; i++) {
			for(j=0; j<column1; j++) {
				
			}
		}
	}
	
	return 0;
}

#include <stdio.h>

int main() {
	
	int i, j, row, column;
	printf("Number of rows: ");
	scanf("%d", &row);
	printf("Number of columns: ");
	scanf("%d", &column);
	printf("\n");
	
	int matrix[row][column], sum[row][column], matrix2[row][column];	
	printf("The first matrix is:\n");
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("Enter A(%d,%d): ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("The second matrix is:\n");
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("Enter A(%d,%d): ", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("\n");
	
//	for(i=0; i<row; i++) {
//		for(j=0; j<column; j++) {
//			printf("%d\t", matrix[i][j]);
//		}
//		printf("\n");
//	}
	
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			sum[i][j] = matrix[i][j] + matrix2[i][j];
		}
	}
	
	printf("The sum of two matrix is: \n")
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

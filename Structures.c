#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
	
	int i, n;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	
    struct Student student[n];
	
	for (i = 0; i < n; i++) {
		
		printf("Enter details for student %d:\n", i + 1);
		
	    printf("Enter student Roll Number: ");
	    scanf("%d", &student[i].rollNumber);
	    getchar();
	
	    printf("Enter student name: ");
	    gets(student[i].name);
	
	    printf("Enter marks: ");
	    scanf("%f", &student[i].marks);
	}
	
	printf("Student Details:\n");
	for (i = 0; i < n; i++) {
	    printf("\nStudent Details:\n");
	    printf("Roll Number: %d\n", student[i].rollNumber);
	    printf("Name: %s\n", student[i].name);
	    printf("Marks: %.2f\n", student[i].marks);
	}

    return 0;
}


#include <stdio.h>

struct Student {
    char name[50];
    int eng;
    int math;
    int chem;
    int phy;
};

int main() {
    int i, n;
    printf("Number of students: ");
    scanf("%d", &n);
    struct Student student[n];
    
    getchar();

    for (i = 0; i < n; i++) {
        printf("Enter the details of student %d\n", i + 1);

        printf("Name: ");
        gets(student[i].name);

        printf("Marks in English: ");
        scanf("%d", &student[i].eng);
        printf("Marks in Mathematics: ");
        scanf("%d", &student[i].math);
        printf("Marks in Chemistry: ");
        scanf("%d", &student[i].chem);
        printf("Marks in Physics: ");
        scanf("%d", &student[i].phy);

        getchar();
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        int total = student[i].eng + student[i].math + student[i].chem + student[i].phy;
        int average = total / 4;
        printf("Name = %s\tTotal marks = %d\tAverage marks = %d\n", student[i].name, total, average);
    }

    return 0;
}


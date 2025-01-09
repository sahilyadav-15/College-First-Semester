#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter three numbers (separated by spaces): ");
    scanf("%d %d %d", &a, &b, &c);
    
    float average = (a+b+c)/3;
    printf("\nThe average of %d, %d and %d is \n%.2f", a, b, c, average);
    
    return 0;
}

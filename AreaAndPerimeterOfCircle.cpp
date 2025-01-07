#include <stdio.h>
#define PI 3.14

int main() {

    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float perimeter = 2*PI*radius, area = PI*radius*radius;

    printf("\nArea of the circle = %.2f\nPerimeter of the circle = %.2f", area, perimeter);

    return 0;
}
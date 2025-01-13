// Program using function to calculate the area and circumference of a circle
#include <stdio.h>
#define PI 3.14

float calcArea(int r) {
	float area = PI*r*r;
	return area;
}

float calcCircumference(int r) {
	float circum = 2*PI*r;
	return circum;
}

int main() {
	int radius;
	printf("Radius of the circle: ");
	scanf("%d", &radius);
	
	printf("Area of the circle = %.2f\n", calcArea(radius));
	printf("Circumference of the circle = %.2f\n", calcCircumference(radius)4);
	
	return 0;
}

#include <stdio.h>

int main() {
	
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age < 18) printf("You are a not eligible to vote.");
	if(age >= 18) printf("You are eligible to vote.");
	
}

// Calculate the length of a string

#include <stdio.h>

int main() {
	
//	char str[] = "Length of this paragraph";
	char str[50];
	printf("Enter : ");
	gets(str);
	int i = 0;
	
	while(1) {
		if(str[i]=='\0') {
			break;
		}
		i++;
	}
	
	printf("The length of the string is %d", i);
	
	return 0;
}

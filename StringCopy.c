// Copying one string two other;

#include <stdio.h>

int main() {
	
	char string1[50], string2[50], string3[50];
	int i = 0;
	
	printf("Enter a text: ");
	gets(string1);
	
	while(1) {
		string2[i] = string1[i];
		if(string1[i]=='\0') break;
		else i++;
	}
	
	printf("The original string = %s\n", string1);
	printf("The copied string = %s\n", string2);
	
	printf("\nCopied using strcpy: ");
	strcpy(string3, string2);
	printf("%s", string2);

	return 0;
}

// concatinate two strings

#include <stdio.h>

int main() {
	
	int count = 0, i;
	char string1[50], string2[50], string3[50], string4[50];
	printf("Enter string 1: ");
	gets(string1);
	printf("Enter string 2: ");
	gets(string2);
	
	while(1) {
		if(string1[count]=='\0') {
			break;
		}
		count++;
	}
	
	for(i=0; i<count; i++) {
		string3[i] = string1[i];
	}
	
	for(i = 0; string2[i]!='\0'; i++) {
		string3[i+count] = string2[i];
	}
	
	printf("\nAfter adding both: %s\n", string3);
	
	strcpy(string4, string1);
	strcat(string4, string2);
	printf("\Adding using strcat: %s", string4);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
	
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
}

void reverse_vowels(char *s) {
	
	int left = 0;
	int right = strlen(s) - 1;
	
	while(left < right) {
		while(left < right && !is_vowel(s[left])) {
			left++;
		}
		while(left < right && !is_vowel(s[right])) {
			right--;
		}
		
		if(left < right) {
			char temp = s[left];
			s[left] = s[right];
			s[right] = temp;
			left++
		}
	}
}

int main() {
	
	char str[] = "IceCream";
	printf("Original string: %s\n", str);
	
	reverse_vowels(str);
	printf("R sting: %s\n", str);
	
	return 0;
}

#include<stdio.h>

int main() {
    char str[50], rev[50];
    int i, j;

    
    printf("Enter the string: ");
    gets(str);

    
    for(i = 0; str[i] != '\0'; i++);

    
    i--; 
    for(j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];  
    }

    rev[j] = '\0';  

    
    printf("Reversed string: ");
    puts(rev);

    return 0;
}

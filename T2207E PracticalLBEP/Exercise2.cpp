#include <stdio.h>
#include <string.h>

void upperCase(char s[]){
	int i;
	printf("\nEnter string : ");
   	gets(s);

	for (i = 0; s[i]!='\0'; i++) {
	    if(s[i] >= 'a' && s[i] <= 'z') {
	         s[i] = s[i] - 32;
	    }
    }
    printf("\nUpper Case : %s", s);
}

int main() {
    char s[100];
    upperCase(s);
    return 0;
}

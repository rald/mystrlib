#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *titlecase(char *s) {
	for(int i=0;i<strlen(s);i++) {
		if(i==0 || (isalpha(s[i]) && s[i-1]==' ')) {
			s[i]=toupper(s[i]);
		}
	}
	return s;
}


int main() {

	char str[]="goodbye cruel world";

	printf("%s\n",titlecase(str));

	return 0;
}

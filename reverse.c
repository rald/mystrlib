#include <stdio.h>

void swap(char *x,char *y) {
	char t=*x;
	*x=*y;
	*y=t;
}

char *reverse(char *s) {
	char t;
	for(int i=0,j=strlen(s)-1;i<=j;i++,j--) {
		swap(&s[i],&s[j]);
	}
	return s;
}

int main() {
	char str[]="Hello World";
	printf("%s\n",reverse(str));
	return 0;
}

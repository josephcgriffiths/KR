#include <stdio.h>

int main(){
	int c;

	while((c = getchar()) != EOF){

		if(c == '\t'){
			putchar('\t');
			c = 't';
		} else if(c == '\b'){
			putchar('\b');
			c = 'b';
		} else if (c == '\\'){
			putchar('\\');
			c = '\\';
		}

		putchar(c);
	}
	
}

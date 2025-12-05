#include <stdio.h>

int main(){
	int c, nl, bl, tb;

	nl = 0;
	bl = 0;
	tb = 0;

	while((c = getchar()) != EOF){
		if (c == '\n'){
			++nl;
		} else if (c == ' '){
			++bl;
		} else if (c == '\t'){
			++tb;
		}

	}

	printf("Lines: %d\nBlanks: %d\nTabs: %d\n", nl, bl, tb);
}

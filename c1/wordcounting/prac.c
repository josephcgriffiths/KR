#include <stdio.h>

#define IN 1 
#define OUT 0


int main(){
	int c, nw, nl, nc, STATE;

	nw = nl = nc = 0;

	STATE = OUT;

	while ((c = getchar())!=EOF){
		++nc;
		if(c=='\n'){
			++nl;
		}
		else if (c == ' ' || c == '\n' || c == '\t'){
			STATE = OUT;
		}
		else{
			STATE = IN;
			++nw;
		}

	}

	printf("%d\t%d\t%d", nc, nw, nl);
}

#include <stdio.h>

#define MAX_WORD_SIZE 11

int main(){
	int c, i, j, nc = 0;

	int ndigit[MAX_WORD_SIZE+1];

	for(i = 0; i <= MAX_WORD_SIZE; ++i){
		ndigit[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(nc != 0 && nc <= MAX_WORD_SIZE){
				++ndigit[nc];
			}
			nc = 0;
		} else {
			++nc;
		}
	}

	for(i = 1; i <= MAX_WORD_SIZE; ++i){
			printf("|%2d|", i);
			for(j = 0; j < ndigit[i]; ++j){
				putchar('#');
			}	

		putchar('\n');
	}	
		
}

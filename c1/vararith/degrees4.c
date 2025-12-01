#include <stdio.h>

/* print Farenheit-Celsius table
* 	for fahr = 0, 20, ..., 300 */ 
int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("cel\tfahr\n");
	while(celsius<=upper){
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%3.2f %6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

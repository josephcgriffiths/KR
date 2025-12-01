#include <stdio.h>

/* print Farenheit-Celsius table
* 	for fahr = 0, 20, ..., 300 */ 
int main(){
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr<=upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius); //prints the first number of each line in a field 3 digits wide, seond in a field 6 digits wide
		fahr = fahr + step;
	}
}

#include <stdio.h>

/* print Farenheit to Celsius conversion table for fahr = 0, 10, 20...300 */

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /*sets lower limit of temperature table as zero*/
	upper = 300; /*sets upper limit of temp. table as three hundred*/
	step = 10; /*sets step size to ten*/

	fahr = lower;
	printf("   Farenheit\tCelsius\n");
	printf("   =========\t=======\n");
	while (fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("\t%d\t    %d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
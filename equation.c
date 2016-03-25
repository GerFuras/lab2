#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 4) 
	{
		fprintf(stderr, "Equation: Missing coefficients!!!\n");
 		exit(EXIT_FAILURE);
 	}
 	
	double a, b, c, d, x1, x2;

 	a = atof(argv[1]);
 	b = atof(argv[2]); 
 	c = atof(argv[3]);
 	
 	if (a == 0) 
	{
 		fprintf(stderr, "Equation: Coefficient A can't be equal 0!!! Try again!\n");
 		exit(EXIT_FAILURE);
 	}
	
	d = b * b - 4 * a * c;

	if (d < 0) {
		fprintf(stderr, "Equation: No real roots!!!\n");
		exit(EXIT_FAILURE);
	}

	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);
		
	if (x1 == x2) 
	{
		printf("X = %.3f\n", x1);
	} 
	else 
	{
		printf("X1 = %.3f ; X2 = %.3f\n", x1, x2);
	}
	
 	return EXIT_SUCCESS;
} 
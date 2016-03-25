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
 	return EXIT_SUCCESS;
} 
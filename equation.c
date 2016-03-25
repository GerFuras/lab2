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
 	
 	return EXIT_SUCCESS;
} 
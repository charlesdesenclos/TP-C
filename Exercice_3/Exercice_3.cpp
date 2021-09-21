#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	int poids = 0;
	float tarifs = 0.00;

	printf(" Donnez le poids :");
	scanf(" %d", &poids);

	if (poids < 20)
	{
		tarifs = 3.00;
		printf("Le tarif est de %.2f frs pour %d g", tarifs, poids);
	}
	else if (poids >= 20 && poids < 50)
	{
		tarifs = 3.95;
		printf("Le tarif est de %.2f frs pour %d g", tarifs, poids);
	}
	else if (poids >= 50)
	{
		tarifs = 5.90;
		printf("Le tarif est de %.2f frs pour %d g", tarifs, poids);
	}
}



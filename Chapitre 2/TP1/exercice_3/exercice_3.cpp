#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

#include <iostream>

int main()
{
	float somme = 0;
	const int TAB_SIZE = 10;
	int i;

	float T[TAB_SIZE];
	printf("Entrez les nombres  du tableau\n");
	for (int i = 0; i < TAB_SIZE; i++) {
		printf("Nombre %d/10 : ", i + 1);
		scanf("%f", &T[i]);
	}
	
	for (i = 0; i < T[i]; i++)
	{
		somme = somme + T[i];
	}
	printf("La somme est %f", somme);
}


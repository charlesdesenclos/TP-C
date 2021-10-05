#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	
	const int TAB_SIZE = 10;
	int tNombres[TAB_SIZE];

	// Demander les nombres à l'utilisateur
	printf("Entrez les nombres (entiers) du tableau\n");
	for (int i = 0; i < TAB_SIZE; i++) {
		printf("Nombre %d/10 : ", i + 1);
		scanf("%d", &tNombres[i]);
	}

	// Rechercher le plus petit nombre
	int nbMin = tNombres[0];
	for (int i = 1; i < TAB_SIZE; i++) {
		if (tNombres[i] < nbMin) nbMin = tNombres[i];
	}

	// Rechercher le plus grand nombre
	int nbMax = tNombres[0];
	for (int i = 1; i < TAB_SIZE; i++) {
		if (tNombres[i] > nbMax) nbMax = tNombres[i];
	}

	// Aficher le tableau
	printf("\ntNombres : %d", tNombres[0]);
	for (int i = 1; i < TAB_SIZE; i++) printf(", %d", tNombres[i]);

	printf("\nLa valeur minimale est : %d", nbMin);
	printf("\nLa valeur maximale est : %d", nbMax);

	return 0;
}


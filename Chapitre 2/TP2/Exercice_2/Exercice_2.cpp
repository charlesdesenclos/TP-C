#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	float somme = 0;
	const int TAB_SIZE_1 = 3;
	const int TAB_SIZE_2 = 4;
	int i;

	float t[TAB_SIZE_1][TAB_SIZE_2];
	float m[TAB_SIZE_1];
	float moyenne, somme;
	printf("Entrez les nombres  du tableau\n");
	for (int i = 0; i < TAB_SIZE_1; i++) {
		for (int j=0; j < TAB_SIZE_1; j++)
		{		printf("Nombre %d/10 : ", i + 1);
			scanf("%f", &t[i][i]);
	}
		somme = somme + t[i][i];
		moyenne = t[i][i] / 4;
}

/*{
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
}*/

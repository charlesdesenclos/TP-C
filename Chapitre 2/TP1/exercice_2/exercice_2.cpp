#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	const int TAB_SIZE = 10;
	int n = 0, i, c;
	float T1[TAB_SIZE], T2[TAB_SIZE];
	printf("Entrez les nombres (entiers) du tableau\n");
	for (int i = 0; i < TAB_SIZE; i++) {
		printf("Nombre %d/10 : ", i + 1);
		scanf("%f", &T2[i]);
	}

	c = 0;
	for (i = 0; i < n; i++) {
		if (T2[i] >= 0) {
			T1[c] = T2[i];
			i = i + 1;

		}
	}
	for (i = c; i < n; i++) {
		T1[c] = 0;
	}
	
	printf("\nAffichage du tableau 1 contenant les entiers positif: \n");
	for (i = 0; i < n; i++) {
		printf("%f\t", T1[c]);
	}
	
	
}


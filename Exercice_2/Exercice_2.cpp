// Exercice_2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 0, b =0 , c= 0;

	printf("Entrez trois nombres :");
	scanf("%d %d %d", &a, &b, &c);

	

	if (a > b && b > c)
	{
		printf("L'ordre croissant des trois nombres est %d %d %d", c, b, a);
	}
	else if (b > a && a > c)
	{
		printf("L'ordre croissant des trois nombres est %d %d %d", c, a, b);
	}
	else if (c > b && b > a)
	{
		printf("L'ordre croissant des trois nombres est %d %d %d", a, b, c);
	}


}
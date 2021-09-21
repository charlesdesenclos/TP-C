// TP_2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a = 0, b =0, total = 0,i;
	printf("Donnez la valeur de a : ");
	scanf("%d  ", &a);
	printf("Donnez la valeur de b :");
	scanf("%d", &b);

	if (b > 0)
	{
		for (i = 1; i <= b; i++)
		{
			total = total + a;
		}
	}
	else
	{
		for (i = 1; i <= (-b); i++)
		{
			total = total + (-a);
		}
	}
	printf("Le produit entre %d et %d est : %d", a, b, total);
	

	

}


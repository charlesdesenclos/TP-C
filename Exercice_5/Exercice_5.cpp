#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, total6 = 0, total7 = 0, total8 = 0, total9 = 0, total10 = 0;
	int x;
	
	printf(" Saisir une valeur comprise entre 2 et 10 : ");
	scanf("%d", &x);

	total1 = x * 1;
	total2 = x * 2;
	total3 = x * 3;
	total4 = x * 4;
	total5 = x * 5;
	total6 = x * 6;
	total7 = x * 7;
	total8 = x * 8;
	total9 = x * 9;
	total10 = x * 10;

	printf("1 : %d\n", total1);
	printf("2 : %d\n", total2);
	printf("3 : %d\n", total3);
	printf("4 : %d\n", total4);
	printf("5 : %d\n", total5);
	printf("6 : %d\n", total6);
	printf("7 : %d\n", total7);
	printf("8 : %d\n", total8);
	printf("9 : %d\n", total9);
	printf("10 : %d\n", total10);

}

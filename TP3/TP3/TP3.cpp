#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>

int main()
{
	char ch[20], rev[20];
	int i, j, t;
	printf("Entrez la chaine");
	gets(ch);
	j = 0;
	

	rev[t] = '\0'; //le dernier caractère doit toujours être égale à '\0'.
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = ch[i];
	}
	rev[i] = '\0';

	printf(" Chaîne de caractère après inversion = %s", rev);



}



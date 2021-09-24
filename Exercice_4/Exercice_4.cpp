#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	int age, sexe, preferance, sport, quelsport;
	int nbrcinema, nbrpreferance;
	

	printf("Quel age avez vous ?");
	scanf("%c", &age);
	printf("Quel est votre sexe  1 : homme  ou 2 : femme ?");
	scanf("%c", &sexe);
	printf("Combien de fois allez vous au cinema par mois");
	scanf("%d", &nbrcinema);
	printf("Préférez vous  1 :Quick ou 2: Mac_Do ?");
	
	if (preferance = Quick || preferance = Mac_Do)
	{
		scanf("%c", &preferance);
	}
	printf(" Combien de fois vous y allez ?");
	scanf("%d", nbrpreferance);
	printf("Quel sport pratiquez vous parmi :  1 :foot, 2 : tennis,  3 : basket, 4 : judo, 5 : natation ?");
	scanf("%c", sport);
	printf(" Votre age est : %c\n", age);
	if (sexe == 1);
	{
		printf("votre sexe est homme\n", sexe);
	}
	else if (sexe == 2)
	{
		printf("votre sexe est femme\n", sexe);
	}
	printf("   Le nombre de fois que vous allez au cinéma est : %d\n", nbrcinema);
	if (preferance == 1)
	{
		printf("votre preferance est Quick.\n");
	}
	else if (preferance == 2)
	{
		printf("votre preferance est Macdo\n");
	}
	printf(" Le nombre de fois que vous y allez : %d\n",nbrpreferance);
	if ( sport == 1)
	{
		printf("Votre sport est foot");
	}
	else if ( sport == 2)
	{
		printf("Votre sport est tennis");
	}
	else if ( sport == 3)
	{
		printf("Votre sport est basket");
	}
	else if ( sport == 4)
	{
		printf("Votre sport est judo");
	}
	else if ( sport == 5)
	{
		printf("Votre sport est natation");
	}
	


}



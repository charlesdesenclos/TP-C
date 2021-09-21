#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	char age, sexe, preferance, sport, quelsport;
	int nbrcinema, nbrpreferance;
	

	printf("Quel age avez vous ?");
	scanf("%c", &age);
	printf("Quel est votre sexe ?");
	scanf("%c", &sexe);
	printf("Combien de fois allez vous au cinema par mois");
	scanf("%d", &nbrcinema);
	printf("Préférez vous Quick ou Mac_Do ?");
	
	if (preferance = Quick || preferance = Mac_Do)
	{
		scanf("%c", &preferance);
	}
	printf(" Combien de fois vous y allez ?");
	scanf("%d", nbrpreferance);
	printf("Quel sport pratiquez vous parmi : foot, tennis, basket,judo, natation ?");
	if (sport = foot|| sport = tennis  || sport = basket || sport = judo || sport = natation);
	{
		scanf("%c", sport);
	}
	printf(" Votre age est : %c\n, Votre sexe est : %c\n, Le nombre de fois que vous allez au cinéma est : %d\n, Votre préférence est : %c\n, Le nombre de fois que vous y allez : %d\n, Votre sport est : %c", age, sexe, nbrcinema, preferance, nbrpreferance, sport);


}



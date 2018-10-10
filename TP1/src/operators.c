#include<stdio.h>

/**
  Teste les différents opérateurs arithmétiques
**/

int main () {

	// Déclaration des variables
	int a = 16;
	int b = 3;

	// Affichage
	printf("addition : %i\n ", a+b);
  printf("Soustraction : %i\n ", a-b);
  printf("multiplication : %i\n ", a*b);
  printf("division : %i\n ", a/b);
  printf("Reste division euclidienne : %i\n ", a%b);

	return(0);

}

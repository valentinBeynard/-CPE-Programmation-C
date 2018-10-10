#include<stdio.h>

/**
  Affiche des variables de différents types natifs.
  Le résultat d'un sizeof est toujours un long int, d'où l'utilisation
  de %lu dans les printf.
**/

int main(){

	// Déclaration des variables
	char c = 'a';
	int i =10000;
	short s = 5;
	long int li= 10000000;
	long long int lli = 10000000000;
	float f = 2.0;
	double d = 3.258;
	long double ld = 5847.2548;

	unsigned char u_c = 'e';
	unsigned short u_s = 148;
	unsigned int u_i = 25474;
	unsigned long int u_li = 24587659;
	unsigned long long int u_lli = 584698562541;


	// Affichages 
  printf("taille caractere : %c\n", c);
  printf("taille short : %hd\n", s);
  printf("taille int : %i\n", i);
  printf("taille long int : %ld\n", li);
  printf("taille long long int : %lld\n", lli);
  printf("taille float : %f\n", f);
  printf("taille double : %g\n", d);
  printf("taille long double : %Lg\n", ld);

  printf("taille unsigned caractere : %hhu\n", u_c);
  printf("taille unsigned short : %hu\n", u_s);
  printf("taille unsigned int : %u\n", u_i);
  printf("taille unsigned long int : %lu\n", u_li);
  printf("taille unsigned long long int : %llu\n", u_lli);

  return 0;

}

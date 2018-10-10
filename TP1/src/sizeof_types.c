#include<stdio.h>

/**
  Affiche les tailles en Octets des différents types natifs.
  Le résultat d'un sizeof est toujours un unsigned long int, d'où l'utilisation
  de %lu dans les printf.
**/

int main(){

        printf("taille caractere : %lu\n", sizeof(char));
        printf("taille short : %lu\n", sizeof(short));
        printf("taille int : %lu\n", sizeof(int));
        printf("taille long int : %lu\n", sizeof(long int));
        printf("taille long long int : %lu\n", sizeof(long long int));
        printf("taille float : %lu\n", sizeof(float));
        printf("taille double : %lu\n", sizeof(double));
        printf("taille long double : %lu\n", sizeof(long double));

        printf("taille unsigned caractere : %lu\n", sizeof(unsigned char));
        printf("taille unsigned short : %lu\n", sizeof(unsigned short));
        printf("taille unsigned int : %lu\n", sizeof(unsigned int));
        printf("taille unsigned long int : %lu\n", sizeof(unsigned long int));
        printf("taille unsigned long long int : %lu\n", sizeof(unsigned long long int));

	return 0;


}

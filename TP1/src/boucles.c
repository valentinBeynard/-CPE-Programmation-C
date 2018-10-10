#include<stdio.h>

/**
  Dessine un triangle rectangle dont le motifs est prédéfinit
**/

int main(){

	// Longueur du triangle
	int count = 15;

	// Pour tous les triangles, on commence à tracer le sommet uniquement
	// composé du caractère *
	printf("*\n");
	printf("**\n");

	// Index des boucles
	int i;
	int j;

	// On parcours les lignes verticales composant le triangle
	for(i = 2; i < count ; i++)
	{
		// Caractère de début de ligne
		printf("*");

		// On trace les caractères de la lignes
		for(j = 0 ; j < i-1 ; j++)
		{
			// Si il s'agit de la dernière ligne du triangle, tracer que des *
			if(i == count-1)
			{
				printf("*");
			}else{
				printf("#");
			}
		}

		// Dernier caractère de chaque ligne
		printf("*\n");
	}

	return 0;
}

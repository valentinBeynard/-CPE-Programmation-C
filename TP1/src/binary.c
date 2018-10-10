#include <stdio.h>

/*
  Affiche la représentation binaire d'un entier

*/

int main ()
{

  // Entier à afficher
  int number = 4 ;

	int i;
	for(i = sizeof(int) * 8 - 1 ; i >= 0 ; i--)
	{
    // On décale à droite de i-bits un des octet représentant number, on sélectionne
    // le bit le plus à droite, et on affiche sa valeur
    if( ((number>>i) & 0x1) == 0 )
		{
			printf("0");
		}else{
			printf("1");
		}

    // Comme un int est sur 4 octet ici, on sépare tous les 8bits par une tabulation
		if(i % 8 == 0 && i != sizeof(int) * 8)
		{
			printf("\t");
		}
	}

	printf("\n");

	return(0);




}

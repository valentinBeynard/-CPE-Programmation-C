#include<stdio.h>

/**
  Mise en oeuvre des opérateurs conditionnels : affiche tous les nombre entre 0 et 1000 divisibles par 2 et 5
**/

int main(){

	int i = 0;
	for(i=0; i <= 1000;i++)
	{
		if (i%30 == 0)
		{
				printf("nombre divisible par 2 et 15 : %i\n", i);
		}
	}



}

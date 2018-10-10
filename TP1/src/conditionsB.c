#include <stdio.h>

/**
  Mise en oeuvre des opérateurs conditionnels : affiche tous les nombre entre 0 et 1000 divisibles par 103 ou 107
**/


int main ()
{
	int i;
	for(i=0;i<=1000;i++)
	{
		if (i % 103 ==0 || i % 107 == 0)
		{	printf("%i\n",i);
		}

	}
	return(0);


}

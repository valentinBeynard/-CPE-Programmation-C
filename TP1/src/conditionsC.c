#include <stdio.h>

/**
  Mise en oeuvre des opérateurs conditionnels : affiche tous les nombre entre 0 et 1000 divisibles par 7 ou 5 mais pas 3
**/



int main ()
{
    int i;
    for(i=0;i<=1000;i++)
    {
		if( i % 3 == 0){
			continue;
		}

	if (i % 7 == 0 || i % 5 == 0)
	{
      		printf("%i\n",i);

	}

    }
return(0);




}


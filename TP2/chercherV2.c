#include <stdio.h>

#define SIZE_TABLE	5


int main()
{
	// Phrase recherché
	char *target;

	// ptr contenant le phrase rentrée par l'utilisateur
	char user_input[50];

	// Flag : 1 si phrase trouvée, 0 sinon
	int find = 1;

	// ptr du tableau (inutile ...)
	char **table;

	// Déclaration des phrases dans un tableau de ptr char
	char *tableau[SIZE_TABLE] =
	{
		"Bonjour je m'appelle Andre",
		"LA ligne Verte est cool",
		"Pierre qui roule n'amasse pas mousse",
		"L'Insa c'est nul ...",
		"Bonjour"
	};

	// Pointer pour ne pas utiliser les indices []
	// Inutile car tableau peut déjà être utiliser en tant que pointer char ** ....
	table = (char **)tableau;

	// On demande la phrase a rentrer
	printf("Entrer la phrase \t");
	// scanf avec regex, sinon la chaine récupéré s'arrête au premier espace de la phrases
	// Le regex permet donc de "remplir le buffer jusqu'à trouver un séparateur \n"
	scanf("%[^\n]", user_input);

	target = user_input;
	printf("Phrase a trouver : %s", target);

	int i = 0;
	int j = 0;

	// On parcours les phrases du tableau
	while(i < SIZE_TABLE)
	{
		j=0;
		// On parcours les caractères dans la phrases
		while(j < sizeof(target))
		{
			// On compare chaque caractère à ceux de la phrase recherchée
			// Si différent, on passe à l'autre phrase
			if(*(target+j) != *( *(table+i) + j) )
			{
				find = 0;
				break;
			}
			j++;
		}
		i++;

		// Si on a trouvé la phrase
		if(find == 1 || i == SIZE_TABLE)
		{
			break;
		}else{
			find =1;
			j=0;
		}

	}

	// Affichage du résultat à la fin
	if(find == 1)
	{
		printf("Trouvé !");
	}else{
		printf("Pas trouvé...");
	}
	return 0;

}

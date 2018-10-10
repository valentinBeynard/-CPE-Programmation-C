#include <stdio.h>

/*
	Permet de mettre en oeuvre un 'formatage'/une organisation de donnée à l'aide
	d'une structure

*/

// Structure
typedef struct
{
	char* prenom;
	char* nom;
	char* adresse;
	int note1;
	int note2;

}etudiant;


int main()
{
	// Déclaration et initialisation des structures
	etudiant classe[5] =
			{
				{"Valentin", "BEYNARD", "28 rue Gambetta", 15, 20 },
				{"Florent", "NEANNE", "19 rue caca", 20, 5},
				{"Arnaud", "DALH", "17 rue cpe", 20, 15},
				{"Victor", "DUCRAY", "19 rue absence", 0, 2},
				{"Julien", "BEYNARD", "28 rue gambetta", 20, 20}
			};

	// Affichage des données pour manipuler les structures
	int i = 0;
	for(i = 0; i < sizeof(classe)/sizeof(etudiant) ; i++)
	{
		printf("Prenom  : %s \t Nom  : %s \t Adresse : %s \t Note1 = %i \t Note2 = %i \n", classe[i].prenom, classe[i].nom, classe[i].adresse, classe[i].note1, classe[i].note2);
	}

	return 0;


}

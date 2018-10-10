#include <stdio.h>

/*
	Permet de mettre en oeuvre un 'formatage'/une organisation de donnée à l'aide
	de tableaux multidimension 

*/

int main()
{
	// Tableau d'étudiants
	char etudiants[3][5][20] =
			{	{"Valentin", "BEYNARD", "28 rue Gambetta", "15", "10"},
				{"Florent", "NEANNE", "19 rue caca", "20", "16"},
				{"Arnaud", "DALH", "16 rue CPE", "10", "18"}
			};

	// Affiche les donnée d'un étudiant
	printf("Nom  : %s   Note1 = %s ", etudiants[1][0], etudiants[1][3]);
	return 0;


}

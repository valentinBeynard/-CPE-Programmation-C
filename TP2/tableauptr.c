#include <stdio.h>
#include <stdlib.h>

/*
	Manipulation d'un tableau de int et de float sans utiliser les indices

*/

int main()
{
	// Déclaration
	int int_table[50];
	float float_table[50];

	// Inutile en soit car int_table (ou float_table) peut être utilisé directement en tant que ptr...
	int * int_table_ptr = int_table;
	float* float_table_ptr = float_table;

	int i =0;
	for(; i < sizeof(int_table)/sizeof(int) ; i++)
	{
		// Initialisation
		*(int_table+i) = rand();
		*(float_table+i) = rand();

		printf("Initialisation : %i\t", *(int_table_ptr+i));

		// Modification
		if(i % 2 == 0)
		{
			*(int_table_ptr+i) = *(int_table_ptr+i) * 3;
			*(float_table_ptr+i) = *(float_table_ptr+i) * 3;
		}

		printf("Modification : %i\n", *(int_table_ptr+i));
	}

	return 0;

}

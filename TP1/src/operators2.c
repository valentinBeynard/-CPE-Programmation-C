#include <stdio.h>

/**
  Effectu différentes opérations sur deux nombres selon la valeur du char op.
	Met en oeuvre les switch/case
**/

int main()
{
	// Variable pour le choix de l'opération
	char op = '~';

	// Variables de calcul
	int num1 = 12, num2 = 45;

	// Choix de l'opération
	switch(op)
	{
		case '+':
			printf("Addition : %i \n ", num1+num2 );
			break;
                case '-':
                        printf("Soustraction : %i \n ", num1-num2 );
                        break;
                case '*':
                        printf("Multiplication : %i \n ", num1*num2 );
                        break;
                case '/':
                        printf("Division : %i \n ", num1/num2 );
                        break;
                case '%':
                        printf("Reste division euclidienne : %i \n ", num1 % num2 );
                        break;
                case '&':
                        printf("AND %i \n ", num1 & num2 );
                        break;
                case '|':
                        printf("OR : %i \n ", num1 | num2 );
                        break;
                case '~':
                        printf("NOT num1 : %i \n ", ~num1 );
												printf("NOT num2 :  %i \n", ~num2);
                        break;

	}


	return 0;
}

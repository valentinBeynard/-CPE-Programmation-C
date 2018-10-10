#include<stdio.h>

/*
	Manipulation des pointers de différents types

*/

int main(){
	char c = 'a';
	int i =10000;
	short s = 5;
	long int li= 10000000;
	long long int lli = 10000000000;
	float f = 2.0;
	double d = 3.258;
	long double ld = 5847.2548;

	char* c_ptr;
	int* i_ptr;
	short* s_ptr;
	long int *li_ptr;
	long long int *lli_ptr;
	float *f_ptr;
	double *d_ptr;
	long double *ld_ptr;

	unsigned char u_c = 'e';
	unsigned short u_s = 148;
	unsigned int u_i = 25474;
	unsigned long int u_li = 24587659;
	unsigned long long int u_lli = 584698562541;

	unsigned char *u_c_ptr;
	unsigned short *u_s_ptr;
	unsigned int *u_i_ptr;
	unsigned long int *u_li_ptr;
	unsigned long long int *u_lli_ptr;

	c_ptr = &c;
	i_ptr = &i;
 	s_ptr = &s;
	li_ptr = &li;
	lli_ptr = &lli;
	f_ptr = &f;
	d_ptr = &d;
	ld_ptr = &ld;

	u_c_ptr = &u_c;
	u_s_ptr = &u_s;
	u_i_ptr = &u_i;
	u_li_ptr = &u_li;
	u_lli_ptr = &u_lli;

        printf("taille caractere : %c \n", *c_ptr);
        printf("Adresse de caractere : %p \n", c_ptr);

        printf("taille short : %hd \n", *s_ptr);
        printf("Adresse de short : %p \n", s_ptr);

        printf("taille int : %i \n", *i_ptr);
        printf("Adresse de int : %p \n", i_ptr);

        printf("taille long int : %ld \n", *li_ptr);
        printf("Adresse de long int : %p \n", li_ptr);

        printf("taille long long int : %lld \n", *lli_ptr);
        printf("Adresse de long long int : %p \n", lli_ptr);


        printf("taille float : %f \n", *f_ptr);
        printf("Adresse de float : %p \n", f_ptr);

        printf("taille double : %g \n", *d_ptr);
        printf("Adresse de double : %p \n", d_ptr);

        printf("taille long double : %Lg \n", *ld_ptr);
        printf("Adresse de long double : %p \n", ld_ptr);

        printf("taille unsigned char : %hhu \n", *u_c_ptr);
        printf("Adresse de unsigned char : %p \n", u_c_ptr);

        printf("taille unsigned short : %hu \n", *u_s_ptr);
        printf("Adresse de unsigned short : %p \n", u_s_ptr);

        printf("taille unsigned int : %u \n", *u_i_ptr);
        printf("Adresse de unsigned int : %p \n", u_i_ptr);

        printf("taille unsigned long int : %lu \n", *u_li_ptr);
        printf("Adresse de unsigned long int : %p \n", u_li_ptr);

        printf("taille unsigned long long int : %llu \n", *u_lli_ptr);
        printf("Adresse de unsigned long long int : %p \n", u_lli_ptr);




        return 0;

}

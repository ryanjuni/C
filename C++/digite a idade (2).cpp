#include <stdio.h>
int main ()
{
	int idade;
   	float altura;
	printf ("digite a idade da pessoa :\n");
	scanf ("%i",&idade);
	printf ("digite a altura da pessoa : \n");
	scanf ("%f",&altura);
	printf (" A idade digitada foi = %i anos ! \n ", idade);
	printf (" A  altura digitada foi = %0.2f metros ! \n", altura);
	return 0;
}

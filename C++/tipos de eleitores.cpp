#include <stdio.h>
int main ()
{
	int idade;
	printf (" entre com a faixa de idade para ser verificado : \n");
	scanf ("%d",&idade);
	if (idade<16)
	printf ("nao Eleitor \n");
	else if (idade >=18 && idade <=65)
	printf ("Eleitor obrigatorio \n");
	else 
	printf ("Eleitor facutativo \n");
}

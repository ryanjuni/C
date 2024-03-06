#include <stdio.h>

int main ()
{
	float nota1, nota2,nota3,media;
	printf ("Entre com a primeira nota do aluno : \n");
	scanf ("%f", &nota1);
	
	printf ("entre com a segunda nota do aluno : \n");
	scanf  ("%f", &nota2);
	
	printf ("entre com a terceira nota do aluno:\n");
	scanf  ("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	printf ("\n o valor da media eh %.2f \n ", media);
}

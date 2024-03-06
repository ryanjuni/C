#include <stdio.h>

int main()

{
	 float nota1, nota2,nota3, media;
	 
	 printf(" Entre com as tres notas  Respectivamente :\n");
	 scanf ("%f%f%f" ,  &nota1,&nota2,&nota3);
	 
	 media =(nota1+nota2+nota3)/3;
	 
	 printf ("A media das notas e: %.2f", media);
}

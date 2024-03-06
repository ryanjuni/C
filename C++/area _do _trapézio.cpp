#include <stdio.h>

int main ()
{

 float bMaior, bMenor,alt,area;
 printf("entre com a base maior , base menor, altura  Respectivamente : \n");
 scanf ("%f%f%f ",&bMaior,&bMenor,&alt);
 
 area = ((bMaior+bMenor)*alt)/2;
 
 printf("area do trapezio: %.2f",area);
}

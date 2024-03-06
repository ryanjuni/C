# include <stdio.h>

int main ()

{
 int quant;
 float preco_custo, preco_total;
 
 
 printf ( " entre com  a quantidade do produto : \n ");
 scanf ( "%d", &quant);
 
 printf ( " entre com o valor de custo  do produto : \n ");
 scanf ( "%f", &preco_custo);
 preco_total =quant*preco_custo;
 
 printf (" o valor de custo total do produto e : %.2f ", preco_total);
 
}

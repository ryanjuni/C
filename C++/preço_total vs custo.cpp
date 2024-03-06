#include <stdio.h>

int main ()
{
	int quant;
	float preco_custo, preco_total;
	
	
	printf ("Entre com a quantidade do Produto : \n " );
	scanf ("%d", &quant);
	printf ("Entre com o valor de custo do produto : \n ");
	scanf ("%f", &preco_custo);
	
	preco_total=quant*preco_custo;
	
	printf (" o valor de custo total do  produto e : %.2f", preco_total); 
}

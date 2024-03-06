#include <stdio.h>

int main()
{

float custofabrica, valDistr, valImpostos , custoTotal;
printf ("Entre com o valor de frabrica do veiculo : \n");
scanf ("%f", &custofabrica);  // entrada

valDistr = custofabrica *0.12;      // 12& = 12/100 = 0.12
valImpostos = custofabrica * 0.45;

custoTotal = custofabrica + valDistr + valImpostos; 

printf ("o valor da Distribuidora e:  %.2f \n", valDistr);
printf ("o valor dos impostos e:  %.2f \n", valImpostos);
printf ("o valor total a ser pago  e:  %.2f \n", custoTotal);
}

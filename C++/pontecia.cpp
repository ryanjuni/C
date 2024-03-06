#include <stdio.h>
#include <math.h>

int main()
{
	int num1,num2,res;
	printf("Entre com o numero: \n");
	scanf("%d",&num1);
	
	printf("Entre com a pontecia :\n");
	scanf("%d",&num2);
	
	res=pow(num1,num2);
	printf("o resultado e: %d\n",res);
}

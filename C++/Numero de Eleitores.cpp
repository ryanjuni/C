# include <iostream>
using namespace std;
main ()
{
	float Numero;
	cout<< " Digite o Numero de Eleitores : ";
	cin>> Numero;
	
	if (Numero>=1000)
	{
		cout<< " Propaganda Politica  ";
	}
	
	else if ( Numero<=350)
	{
		cout<< " Nao interessa";
	}
	
	else if ( Numero>=800)
	{
		cout<< " Panfletagem ";
	}
	else
	{
		cout<< " situacao de alerta ";
	}
}

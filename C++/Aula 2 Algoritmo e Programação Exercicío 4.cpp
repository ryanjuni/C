#include <iostream>
using namespace std ;
int main()
{
	int A,B,C;
	cout<< " Digite o valor do Lado A do Triangulo:";
	cin>>A;
	cout<< "Digite o valor do Lado  B do Triangulo:";
	cin>>B;
	cout<< " Digite o valor do Lado C do Triangulo:";
	cin>>C;
	if (A+B>C&&A+C>B&&B+C>A)
	{
		cout<<" E Um Triangulo!\n";
		if (A==B&&B==C)
	    {
	    	 cout<<"Equilatero!";
		} 
		else if (A==B||A==C||B==C)
		{
		 	 cout<<"Isosceles!";
		} 
		else 	 
		{
		     cout<<"Escaleno!";
	    }    
    } 
    else
    {
	         cout<<" Nao E Triangulo!";
    }
}

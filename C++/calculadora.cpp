#include <iostream>
using namespace std;
int main ()
{
	int num1,num2,resultado;
	char op;
	
    cout << "Entre com o primeiro numero :\n"<< endl;
	cin >>num1;
	
  cout <<"Entre com uma das operacoes : [+,-,*,/ ]\n" << endl;
	cin>> op;
  cout << "Entre com o segundo numero :\n" << endl;
	cin >> num2;
	
	if (op == '+')
	  resultado = num1+num2;
	  
	 else 	if (op == '/')
	  resultado = num1 / num2;
	  
	  else if (op == '*')
	   resultado = num1 * num2;
	   
	     else if (op == '-')
	   resultado = num1 - num2;
	   cout <<num1<<op<<num2<<"="<<resultado<< endl;
	   return 0;
}

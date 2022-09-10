//Pedir números por pantalla hasta que alguno sea mayor a 100
//Katherine Pineda 
#include <iostream>
using namespace std;

int main()
{
	int numero;
	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
	}
	while(numero <= 100);
	system("Pause");
	return 0;
}

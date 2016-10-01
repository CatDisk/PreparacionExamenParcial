#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *nroImpar, int *nroPar)
{
	cout << "Ingrese la cantidad de numeros pares a sumar: ";
	cin >> *nroPar;
	cout << "Ingrese la cantidad de numero impares a sumar: ";
	cin >> *nroImpar;
}

void calcNprintPar(int *nroPar)
{
	int suma = 0;
	cout << "Suma de pares: ";
	for (int i = 1; i <= *nroPar; i++)
	{
		cout << 2*i << " + ";
		suma += 2*i;
	}
	cout << "\b\b= " << suma << endl;
}

void calcNprintImpar(int *nroImpar)
{
	int suma = 0;
	cout << "Suma de Impares: ";
	for (int i = 1; i <= *nroImpar; i++)
	{
		cout << (2 * i) - 1 << " + ";
		suma += (2 * i) - 1;
	}
	cout << "\b\b= " << suma;
}

int main()
{
	int *nroPar, *nroImpar;
	nroPar = new int;
	nroImpar = new int;

	input(nroImpar, nroPar);
	calcNprintPar(nroPar);
	calcNprintImpar(nroImpar);

	delete nroImpar, nroPar;
	_getch();
	return 0;
}
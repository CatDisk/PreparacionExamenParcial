#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *ingreso)
{
	do
	{
		cout << "Ingrese un numero entero positivo: ";
		cin >> *ingreso;
	} while (*ingreso < 1);
}

void calcNprint(int *ingreso)
{
	int cuadrado = 0;

	cout << *ingreso << " al cuadrado es: ";
	for (int i = 1; i <= *ingreso; i++)
	{
		cout << (i * 2) - 1 << " + ";
		cuadrado += (i * 2) - 1;
	}
	cout << "\b\b=" << cuadrado;
}

int main()
{
	int *ingreso;
	ingreso = new int;

	input(ingreso);
	calcNprint(ingreso);

	delete ingreso;
	_getch();
	return 0;
}
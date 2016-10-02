#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *ingreso)
{
	cout << "Ingrese un numero entero (0 para terminar la operacion): ";
	cin >> *ingreso;
}

void actualizar(int *ingreso, int *cant, int *mayor, int *menor, int *cantPos, int *cantNeg, float *prom)
{
	*cant += 1; //numeros leidos

	if (*ingreso > *mayor || *cant == 1) // numero mayor
		*mayor = *ingreso;

	if (*ingreso < *menor || *cant == 1) // numero menor
		*menor = *ingreso;

	if (*ingreso > 0) // numeros positivos
		*cantPos += 1;

	if (*ingreso < 0) // numeros negativos
		*cantNeg += 1;

	if (*cant == 1)
		*prom = *ingreso;
	else
		*prom = ((*prom * (*cant - 1)) + *ingreso) / *cant;
}

void print(int *cant, int *mayor, int *menor, int *cantPos, int *cantNeg, float *prom)
{
	cout << endl;
	cout << "   Numeros leidos: " << *cant << "\n\n";
	cout << "     Numero mayor: " << *mayor << "\n\n";
	cout << "     Numero menor: " << *menor << "\n\n";
	cout << "Numeros positivos: " << *cantPos << "\n\n";
	cout << "Numeros negativos: " << *cantNeg << "\n\n";
	cout << "         Promedio: " << *prom;
}

int main()
{
	int *ingreso, *cant, *mayor, *menor, *cantPos, *cantNeg;
	float *prom;
	ingreso = new int;
	cant = new int;
	mayor = new int;
	menor = new int;
	cantPos = new int;
	cantNeg = new int;
	prom = new float;

	*cant = 0;
	*cantPos = 0;
	*cantNeg = 0;

	do
	{
		input(ingreso);
		if (*ingreso != 0)
			actualizar(ingreso, cant, mayor, menor, cantPos, cantNeg, prom);
	} while (*ingreso != 0);

	print(cant, mayor, menor, cantPos, cantNeg, prom);

	_getch();
	delete ingreso, cant, mayor, menor, cantPos, cantNeg, prom;
	return 0;
}
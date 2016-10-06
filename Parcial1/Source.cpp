#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *n, float *a)
{
	do
	{
		cout << "Ingrese el valor de N: ";
		cin >> *n;
	} while (*n < 0);
	do
	{
		cout << "Ingrese el valor de a: ";
		cin >> *a;
	} while (*a < 1 || *a > 4);
}

void calcular(int *n, float *a, float *resultado)
{
	int masMenos; // define si el termino es positivo o negativo por i%2
	float divisor;
	float dividendo;
	*resultado = 0;

	for (int i = 0; i < *n; i++)
	{
		if (i % 2 == 0)
		{
			masMenos = -1;
		}
		else
		{
			masMenos = 1;
		}

		dividendo = (8 + (10 * i))*(*a + 1);
		divisor = 5 + i;

		*resultado += masMenos*(dividendo / divisor);
	}
}

void print(float *res)
{
	cout << endl << "El resultado es: " << *res;
}

int main()
{
	int *n;
	float *a, *res;
	a = new float;
	res = new float;
	n = new int;

	input(n, a);
	calcular(n, a, res);
	print(res);

	_getch();
	delete n, a, res;
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

float a;
int n;
float res = 0;

void input()
{
	do
	{
		cout << "Ingrese el valor de N: ";
		cin >> n;
	} while (n < 0);
	do
	{
		cout << "Ingrese el valor de a: ";
		cin >> a;
	} while (a < 1 || a > 4);
}

void calcular()
{
	int masMenos; // define si el termino es positivo o negativo por i%2
	float divisor;
	float dividendo;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			masMenos = -1;
		}
		else
		{
			masMenos = 1;
		}

		dividendo = (8 + (10 * i))*(a + 1);
		divisor = 5 + i;

		res += masMenos*(dividendo / divisor);
	}
}

void print()
{
	cout << endl << "El resultado es: " << res;
}

int main()
{
	input();
	calcular();
	print();

	_getch();
	return 0;
}
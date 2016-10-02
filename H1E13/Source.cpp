#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *largo)
{
	cout << "Ingrese el numero de elementos: ";
	cin >> *largo;
}

void calc(int *largo, float *suma)
{
	if (*largo > 1)
	{
		for (float i = 1; i < (*largo * 2); i += 2)
		{
			*suma += (i + 1) / i;
		}
	}
	else if (*largo == 0)
	{
		*suma = 0;
	}
	else if (*largo == 1)
	{
		*suma = 1;
	}
}

void print(float *suma, int *largo)
{
	cout << "La suma de las " << *largo << " primeras fracciones es: " << *suma;
}

int main()
{
	int *largo;
	float *suma;
	largo = new int;
	suma = new float;

	*suma = 0;

	input(largo);
	calc(largo, suma);
	print(suma, largo);

	delete largo, suma;
	_getch();
	return 0;
}
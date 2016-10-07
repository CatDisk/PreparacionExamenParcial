#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int pasos;

void espacio()
{
	for (int i = 0; i < 40; i++)
		cout << ' ';
}

void validarPasos()
{
	do
	{
		cout << "Ingrese un numero entre 4 y 9: ";
		cin >> pasos;
	} while (pasos < 4 || pasos > 9);
}

void escalera()
{
	for (int i = 0; i < pasos; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			espacio();
			if (j % 2 == 0)
			{
				cout << pasos - i;
			}
			for (int k = 0; k < i * 2; k++)
			{
				cout << ' ';
			}
			cout << pasos - i << endl;
		}

	}
}

int main()
{
	validarPasos();
	escalera();

	_getch();
	return 0;
}
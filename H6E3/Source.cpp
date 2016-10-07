#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int numero;

void ingreso()
{
	do
	{
		cout << "Ingrese un pinche numero: ";
		cin >> numero;
	} while (numero < 3 || numero > 9);
}

void triangulo()
{
	for (int j = 0; j < numero + numero; j++)
	{
		for (int i = 0; i < numero; i++)
		{
			if (i < j && j <= numero)
				cout << numero - i << ' ';
			else if ((numero*2) - 1 - i >= j && j > numero)
				cout << numero - i << ' ';
			else
				cout << "  "; // 2 espacios
		}
		for (int i = numero - 2; i >= 0; i--)
		{
			if (i < j && j <= numero)
				cout << numero - i << ' ';
			else if ((numero * 2) - 1 - i >= j && j > numero)
				cout << numero - i << ' ';
			else
				cout << "  "; // 2 espacios
		}
		cout << endl;
	}
}

int main()
{
	ingreso();
	triangulo();

	_getch();
	return 0;
}
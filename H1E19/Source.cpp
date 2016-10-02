#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *filas, char *izard)
{
	cout << "Ingrese el numero de filas a imprimir: ";
	cin >> *filas;
	cout << "Ingrese el caracter: ";
	flushall();
	cin >> *izard;
}

void print(int *filas, char *caracter)
{
	for (int i = 0; i < *filas; i++)
	{
		for (int j = 0; j < *filas - i; j++)
		{
			cout << *caracter;
		}
		cout << endl;
	}
}

int main()
{
	int *filas;
	char *caracter;

	filas = new int;
	caracter = new char;

	input(filas, caracter);
	print(filas, caracter);

	delete filas, caracter;
	_getch();
	return 0;
}
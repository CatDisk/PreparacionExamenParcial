#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *tabla)
{
	do
	{
		cout << "Ingrese la tabla que desea imprimir (1-9): ";
		cin >> *tabla;
	} while (*tabla < 1 || *tabla > 9);
}

void calcNprint(int *tabla)
{
	for (int i = 1; i <= 10; i++)
	{
		cout << *tabla << " x " << i << " = " << *tabla * i << endl;
	}
}

int main()
{
	int *tabla;
	tabla = new int;

	input(tabla);
	calcNprint(tabla);

	delete tabla;
	_getch();
	return 0;
}
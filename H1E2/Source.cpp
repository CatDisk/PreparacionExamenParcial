#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int main()
{
	int *input, *suma;
	input = new int;
	suma = new int;
	*suma = 0;

	cout << "Ingrese un numero positivo: ";
	cin >> *input;

	cout << endl << "La suma es ";
	for (int i = 0; i <= *input; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << '+';
			*suma += i;
		}
	}
	cout << "\b=" << *suma; // \b significa backspace (retrocede un espacio)

	delete suma, input;
	_getch();
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int main()
{
	int *suma;
	suma = new int;

	*suma = 0;

	for (int i = 1; i < 11; i++) // comienza del uno porque 0 no es positivo (ni negativo para tal caso :/)
	{
		*suma = *suma + i;
	}

	cout << "La suma de los 10 primeros numeros enteros positivos es: " << *suma;

	delete suma;
	_getch();
	return 0;
}
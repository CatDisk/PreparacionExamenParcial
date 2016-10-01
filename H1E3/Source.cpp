#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *max)
{
	cout << "Ingrese un numero mayor que 0: ";
	cin >> *max;
}

void calcNprint(int *max)
{
	cout << "Los multiplos de 3, menores que " << *max << " son: ";
	for (int i = 1; i < *max; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << ' ';
		}
	}
}

int main()
{
	int *max;
	max = new int;

	input(max);
	calcNprint(max);

	_getch();
	return 0;
}
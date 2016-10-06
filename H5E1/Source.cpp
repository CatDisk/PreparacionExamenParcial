#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *k, float *a)
{
	do
	{
		cout << "Ingrese k: ";
		cin >> *k;
		if (*k > 20)
			cout << "k no puede ser mayor que 20!!" << endl;
	} while (*k>20);
	cout << "Ingrese a: ";
	cin >> *a;
}

int factorial(int *num)
{
	int resultado = 0;

	for (int i = 0; i < *num; i++)
	{
		resultado *= (*num - i);
	}
	return resultado;
}
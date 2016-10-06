#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(int *alto)
{
	cout << "Ingrese un numero N: ";
	cin >> *alto;
}

void print(int *alto)
{
	for (int i = 0; i < *alto; i++)
	{
		for (int j = 1; j < (*alto * 2); j++)
		{
			
		}
	}
}

int main()
{
	int *alto;
	alto = new int;

	input(alto);
	print(alto);

	_getch();
	delete alto;
	return 0;

}
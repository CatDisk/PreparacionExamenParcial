#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

char zona;
int cant;
int cantP = 0;
int cantV = 0;
int cantT = 0;
int cantE = 0;
int cantA = 0;
float total = 0;

void input()
{
	do
	{
		cout << "Ingrese el tipo de entrada (P, V, T, E, A): ";
		flushall();
		cin >> zona;
		zona = toupper(zona);
	} while (zona != 'P' && zona != 'V' && zona != 'T' && zona != 'E' && zona != 'A' && zona != 'X');

	if (zona != 'X')
	{
		do
		{
			cout << "Cantidad de entradas: ";
			cin >> cant;
		} while (cant < 1);
	}
}

void cajero()
{
	switch (zona)
	{
	case 'P':
		cout << "Monto a pagar: " << 543.7 * cant << endl << endl;
		cantP += cant;
		total += 543.7 * cant;
		break;
	case 'V':
		cout << "Monto a pagar: " << 438 * cant << endl << endl;
		cantV += cant;
		total += 438 * cant;
		break;
	case 'T':
		cout << "Monto a pagar: " << 328.5 * cant << endl << endl;
		cantT += cant;
		total += 328.5 * cant;
		break;
	case 'E':
		cout << "Monto a pagar: " << 221.4 * cant << endl << endl;
		cantE += cant;
		total += 221.4 * cant;
		break;
	case 'A':
		cout << "Monto a pagar: " << 101.5 * cant << endl << endl;
		cantA += cant;
		total += 101.5 * cant;
		break;
	default:
		break;
	}
}

void info()
{
	cout << endl;
	cout << "Entradas vendidas por cada zona:" << endl
		<< "Platinum: " << cantP << endl
		<< "Vip: " << cantV << endl
		<< "Tribuna: " << cantT << endl
		<< "Exclusiva: " << cantE << endl
		<< "Apdayc: " << cantA << endl << endl;

	cout << "Monto total recaudado: S/" << total << endl << endl;

	// falta zona con mayor cantidad de publico
}

int main()
{
	do
	{
		input();
		if (zona != 'X')
		{
			cajero();
		}
	} while (zona != 'X');
	info();

	_getch();
	return 0;
}
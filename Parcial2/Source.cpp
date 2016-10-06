#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void input(char *izard, int *cant)
{
	do
	{
		cout << "Ingrese el tipo de entrada (P, V, T, E, A): ";
		flushall();
		cin >> *izard;
		*izard = toupper(*izard);
	} while (*izard != 'P' && *izard != 'V' && *izard != 'T' && *izard != 'E' && *izard != 'A' && *izard != 'X');

	if (*izard != 'X')
	{
		do
		{
			cout << "Cantidad de entradas: ";
			cin >> *cant;
		} while (*cant < 1);
	}
}

void cajero(char *tipo, int *cant, float *total, int *cantP, int *cantV, int *cantT, int *cantE, int *cantA)
{
	switch (*tipo)
	{
	case 'P':
		cout << "Monto a pagar: " << 543.7 * *cant << endl << endl;
		*cantP += *cant;
		*total += 543.7 * *cant;
		break;
	case 'V':
		cout << "Monto a pagar: " << 438 * *cant << endl << endl;
		*cantV += *cant;
		*total += 438 * *cant;
		break;
	case 'T':
		cout << "Monto a pagar: " << 328.5 * *cant << endl << endl;
		*cantT += *cant;
		*total += 328.5 * *cant;
		break;
	case 'E':
		cout << "Monto a pagar: " << 221.4 * *cant << endl << endl;
		*cantE += *cant;
		*total += 221.4 * *cant;
		break;
	case 'A':
		cout << "Monto a pagar: " << 101.5 * *cant << endl << endl;
		*cantA += *cant;
		*total += 101.5 * *cant;
		break;
	default:
		break;
	}
}

void info(float *total, int *cantP, int *cantV, int *cantT, int *cantE, int *cantA)
{
	cout << endl;
	cout << "Entradas vendidas por cada zona:" << endl
		<< "Platinum: " << *cantP << endl
		<< "Vip: " << *cantV << endl
		<< "Tribuna: " << *cantT << endl
		<< "Exclusiva: " << *cantE << endl
		<< "Apdayc: " << *cantA << endl << endl;

	cout << "Monto total recaudado: S/" << *total << endl << endl;

	// falta zona con mayor cantidad de publico
}

int main()
{
	char *zona;
	float *total;
	int *cant, *cantP, *cantV, *cantT, *cantE, *cantA;
	total = new float;
	zona = new char;
	cant = new int;
	cantP = new int;
	cantV = new int;
	cantT = new int;
	cantE = new int;
	cantA = new int;

	*total = 0;
	*cantP = 0;
	*cantV = 0;
	*cantT = 0;
	*cantE = 0;
	*cantA = 0;

	do
	{
		input(zona, cant);
		if (*zona != 'X')
		{
			cajero(zona, cant, total, cantP, cantV, cantT, cantE, cantA);
		}
	} while (*zona != 'X');
	info(total, cantP, cantV, cantT, cantE, cantA);
	delete zona, cant, total, cantA, cantE, cantT, cantV, cantP;
	_getch();
	return 0;
}
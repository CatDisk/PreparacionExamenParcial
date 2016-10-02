#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib> // rand() retorna un numero aleatorio entre 0 y RAND_MAX
#include <ctime> // time(0) tiempo actual como seed para rand()


using namespace std;
using namespace System;

void init(int *meta, int *intentos, int *pista)
{
	srand(time(0)); // generacion de seed
	*meta = rand() % 101; // rand() genera un numero aleatorio hasta RAND_MAX, % 101 hace que sea de 0 hasta 100
	*intentos = 1;
	*pista = 0;
}

void input(int *ingreso, int *intentos)
{
	cout << endl << "Intento " << *intentos << ". Ingese su numero: ";
	cin >> *ingreso;
}

void compare(int *meta, int *ingreso, int *intentos, int *pista)
{
	if (*ingreso > *meta)
		*pista = 1;
	else if (*ingreso < *meta)
		*pista = -1;
	else if (*ingreso == *meta)
		*pista = 0;

	*intentos += 1;
}

void print(int *pista, int *intentos)
{
	if (*pista == 0)
	{
		cout << endl;

		switch (*intentos)
		{
		case 1:
		case 2:
		case 3:
			cout << "Fue pura suerte!!";
			break;
		case 4:
		case 5:
		case 6:
			cout << "Eres bueno!";
			break;
		case 7:
			cout << "No esta mal.";
			break;
		case 8:
			cout << "Se puede mejorar...";
			break;
		default:
			cout << "Que mal estas!!";
			break;
		}
	}
	if (*pista == -1)
		cout << "El numero es mayor." << endl;
	if (*pista == 1)
		cout << "El numero es menor." << endl;
}

int main()
{
	int *pista, *intentos, *meta, *ingreso;
	meta = new int;
	intentos = new int;
	pista = new int;
	ingreso = new int;

	init(meta, intentos, pista);

	do
	{
		input(ingreso, intentos);
		compare(meta, ingreso, intentos, pista);
		print(pista, intentos);
	} while (*pista != 0);
	
	_getch();
	delete pista, intentos, meta, ingreso;
	return 0;
}
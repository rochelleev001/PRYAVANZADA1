#pragma once
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Colas
{
public:
	struct  Nodo {
		char color;
		Nodo* sig;
	};
	void insertarCola(Nodo*&, Nodo*&, char);
	bool cola_vacia(Nodo*);
	void eliminarCola(Nodo*&, Nodo*&, char&);
};


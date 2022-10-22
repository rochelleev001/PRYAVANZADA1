#include "Colas.h"
#include <conio.h>
#include <stdlib.h>
using namespace std;

void Colas::insertarCola(Nodo*& frente, Nodo*& fin, char n) {
	Nodo* nuevo = new Nodo();
	nuevo->color = n;
	nuevo->sig = NULL;
	if (cola_vacia(frente)) {
		frente = nuevo;
	}
	else {
		fin->sig = nuevo;
	}
	fin = nuevo;
}
bool Colas::cola_vacia(Nodo* frente) {
	return(frente == NULL) ? true : false;
}
void Colas::eliminarCola(Nodo*& frente, Nodo*& fin, char& n) {
	n = frente->color;
	Nodo* aux = frente;

	if (frente == fin) {
		frente = NULL;
		fin = NULL;
	}
	else {
		frente = frente->sig;
	}
}
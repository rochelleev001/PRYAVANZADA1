#include "Pilas.h"
#include<iostream>
#include<conio.h>

void Pilas::agregarPila(char n) {
	Nodo* nuevo = new Nodo();
	nuevo->dato = n;

}
void Pilas::sacarPila(Nodo*& pila, char& n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->sig;
	delete aux;
}
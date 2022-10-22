#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
class Pilas
{
	struct  Nodo {
		char dato;
		Nodo* sig;
	};
	void agregarPila(char);
	void sacarPila(Nodo*&, char&);

};


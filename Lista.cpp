#include "pch.h"
#include "Lista.h"
#include "NodoSimple.h"

void Lista::Insertaralfinal(int valor, char color, NodoSimple^& cabeza) {
	NodoSimple^ Lista1 = gcnew NodoSimple();
	Lista1->valor = valor;
	Lista1->color = color;
	Lista1->siguiente = cabeza;
	cabeza = Lista1;
}


void Lista::SacarFinal(int &valor, char &color, NodoSimple^& cabeza) {
	NodoSimple^ aux = cabeza;
	valor = aux->valor;
	color = aux->color;

	cabeza = aux->siguiente,
	delete aux;

}


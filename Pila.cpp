#include "pch.h"
#include "Pila.h"
#include "NodoSimple.h"
Pila::Pila() {
	star = nullptr;
}
void Pila::Insertarvalores(int numero, char color,NodoSimple^& apunodo) {
	NodoSimple^ Pila1 = gcnew NodoSimple();
	Pila1->valor = numero;
	Pila1->color = color;
	Pila1->siguiente = apunodo;
	apunodo = Pila1;

	
}


Pila::~Pila() {
	star = nullptr;
}

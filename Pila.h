#pragma once
#include "NodoSimple.h"
ref class Pila
{
	public:

	NodoSimple^ star;
	

	Pila();
	void Insertarvalores(int numero, char color, NodoSimple^& apunodo);


	~Pila();
};


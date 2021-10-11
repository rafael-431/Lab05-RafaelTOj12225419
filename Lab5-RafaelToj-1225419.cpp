#include "pch.h"
#include "NodoSimple.h"
#include"Pila.h"
#include "Lista.h"
#include <stdlib.h>
#include<time.h>
using namespace System;

int main(array<System::String ^> ^args)
{
    NodoSimple^ Cola1 = nullptr;
    NodoSimple^ Cola2 = nullptr;
    NodoSimple^ Cola3 = nullptr;
    NodoSimple^ Cola4 = nullptr;
    NodoSimple^ Cola5 = nullptr;
    NodoSimple^ Cola6 = nullptr;
    NodoSimple^ Cola7 = nullptr;
    NodoSimple^Mazo =  nullptr;

    for (int i = 0; i < 52; i++)
    {
        srand(time(NULL));
        int num;
        int numcolor;
        num = rand();
        num = 1 + rand()% (9 - 1);
        numcolor = rand();
        numcolor = 2 + rand() % (2 - 1);
        Lista^ lista = gcnew Lista();
        if (numcolor==2)
        {
            lista->Insertaralfinal(num,  'N', Mazo);
        }
        else
        {
            lista->Insertaralfinal(num, 'R', Mazo);
        }

    }
    
    Console::WriteLine("Juego de solitaria");
    Console::WriteLine("Presione la letra r para repartir cartas el mazo");
    Console::ReadKey();
    
    Console::WriteLine("\n"+"G1          G2          G3          G4          G5          G6          G7");
    Console::ReadKey();

    return 0;
}

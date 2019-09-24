#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Forma.hpp"
#include "Circulo.hpp"
#include <vector>

enum formas {CILINDRO, CIRCULO, CUBO, ESFERA, QUADRADO, TRIANGULO};
/*
Forma criaForma()
{

}
*/

int criaFormaAleatoria()
{
    srand(time(0));
    int aleatorio = rand() % 6;
    return aleatorio;
}

int main()
{
    int i = 0, a = 0;
    vector<Forma*> /***/conjunto;
    // conjunto = new vector<Forma*>();

    criaFormaAleatoria();

    /*
    for (i = 0; i < 100; i++)
    {
        conjunto.push_back(criaFormaAleatoria());
    }

    for (i = 0; i < 100; i++)
    {
        conjunto[i].imprimirDados;
    }
    */
    // delete conjunto;
    return 0;
}

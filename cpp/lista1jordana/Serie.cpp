#include <iostream>
#include "Serie.hpp"

using namespace std;

Serie::Serie()
{
    this.nome = "";
    tihs.codigo = -1;
}

Serie::~Serie()
{
    cout << "serie LITERALMENTE destruida" << endl;
}

public string Serie::getNome()
{
    return this.nome;
}

public void Serie::setNome(string nome)
{
    this.nome = nome;
}

public int Serie::getCodigo()
{
    return this.codigo;
}

public void Serie::setCodigo(int codigo)
{
    this.codigo = codigo;
}

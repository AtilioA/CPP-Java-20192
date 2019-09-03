#ifndef __PROFESSOR__
#define __PROFESSOR__
// #include <ctime>
#include <iostream>
#include <string>

class Serie
{
    private:
        string nome;
        int codigo;

    public:
        Serie::Serie();
        Serie::~Serie();

        string Serie::getNome();
        void Serie::setNome(string nome);
        int Serie::getCodigo();
        void Serie::setCodigo(int codigo);
}

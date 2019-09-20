#ifndef _PESSOA_
#define _PESSOA_
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    private:
        string nome;
        tm dataNasc;
        string CPF;
        string RG;

    public:
        Pessoa(string nome, tm dataNasc, string CPF, string RG);
        ~Pessoa();

        string getNome();
        void setNome(string nome);
        tm getDataNasc();
        void setDataNasc(tm data);
        string getCPF();
        void setCPF(string CPF);
        string getRG();
        void setRG(string RG);
};

#endif

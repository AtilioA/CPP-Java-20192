#ifndef _PESSOA_
#define _PESSOA_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Cliente.hpp"

using namespace std;

class Pessoa
{
private:
    string nome;
    tm dataNascimento;
    string RG;
    string CPF;
public:
    Pessoa(string nome, string RG, string CPF);
    ~Pessoa();

    string getNome();
    void setNome(string nome);
    tm getDataNascimento();
    void setDataNascimento(tm dataNascimento);
    string getRG();
    void setRG(string RG);
    void setCPF(string CPF);
    string getCPF();
};

#endif

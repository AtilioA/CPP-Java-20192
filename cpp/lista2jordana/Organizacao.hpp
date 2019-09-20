#ifndef _ORGANIZACAO_
#define _ORGANIZACAO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Cliente.hpp"

using namespace std;

class Organizacao
{
private:
    string nomeFantasia;
    string razaoSocial;
    string CNPJ;

public:
    Organizacao(string nomeFantasia, string razaoSocial, string CNPJ);
    ~Organizacao();

    string getNomeFantasia();
    void setNomeFantasia(string nomeFantasia);
    string getRazaoSocial();
    void setRazaoSocial(string razaoSocial);
    string getCNPJ();
    void setCNPJ(string CNPJ);
};

#endif

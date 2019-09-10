#ifndef _PESSOAFISICA_
#define _PESSOAFISICA_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Pessoa.hpp"
#include "Cliente.hpp"

using namespace std;

class PessoaFisica: Pessoa, Cliente
{
public:
    PessoaFisica(string nome, string RG, string CPF, string end, string tel, string email);
    ~PessoaFisica();
};

#endif

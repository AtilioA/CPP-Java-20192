#ifndef _PESSOAFISICA_
#define _PESSOAFISICA_
#include <iostream>
#include <string>
#include <time.h>
#include "Pessoa.hpp"
#include "Correntista.hpp"

using namespace std;

class PessoaFisica : public Pessoa, public Correntista
{
public:
    PessoaFisica(string nome, tm dataNasc, string CPF, string RG, string endereco, string telefone, string email/*, Conta conta*/) : Pessoa(nome, dataNasc, CPF, RG), Correntista(endereco, telefone, email/*, conta*/){}
    ~PessoaFisica();
};

#endif

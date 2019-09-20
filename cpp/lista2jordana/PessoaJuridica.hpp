#ifndef _PESSOAJURIDICA_
#define _PESSOAJURIDICA_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Pessoa.hpp"
#include "Organizacao.hpp"

using namespace std;

class PessoaJuridica: Cliente, Organizacao
{
public:
    PessoaJuridica(string nomeFantasia, string razaoSocial, string CNPJ, string end, string tel, string email);
    ~PessoaJuridica();
};

#endif

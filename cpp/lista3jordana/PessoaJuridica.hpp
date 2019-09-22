#ifndef _PESSOAJURIDICA_
#define _PESSOAJURIDICA_
#include "Correntista.hpp"
#include "Organizacao.cpp"

class PessoaJuridica : public Correntista, public Organizacao
{
public:
    // PessoaJuridica(string endereco, string telefone, string email, Conta conta, string nomeFantasia, string razaoSocial, string CNPJ) : Correntista(endereco, telefone, email, conta), Organizacao(nomeFantasia, razaoSocial, CNPJ) {}
    ~PessoaJuridica();
};

#endif

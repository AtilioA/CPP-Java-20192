#include "Organizacao.hpp"

Organizacao::Organizacao(string nomeFantasia, string razaoSocial, string CNPJ)
{
    this->setNomeFantasia(nomeFantasia);
    this->setRazaoSocial(razaoSocial);
    this->setCNPJ(CNPJ);
}

Organizacao::~Organizacao()
{
    cout << "Organizacao deletada." << endl;
}

string Organizacao::getNomeFantasia()
{
    return this->nomeFantasia;
}

void Organizacao::setNomeFantasia(string nomeFantasia)
{
    this->nomeFantasia = nomeFantasia;
}

string Organizacao::getRazaoSocial()
{
    return this->razaoSocial;
}

void Organizacao::setRazaoSocial(string razaoSocial)
{
    this->razaoSocial = razaoSocial;
}

string Organizacao::getCNPJ()
{
    return this->CNPJ;
}

void Organizacao::setCNPJ(string CNPJ)
{
    this->CNPJ = CNPJ;
}

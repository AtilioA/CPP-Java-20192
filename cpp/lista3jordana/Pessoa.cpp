#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, tm dataNasc, string CPF, string RG)
{
    this->setNome(nome);
    this->setCPF(CPF);
    this->setRG(RG);
    this->setDataNasc(dataNasc);
}

Pessoa::~Pessoa()
{
    cout << "Pessoa deletada." << endl;
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

tm Pessoa::getDataNasc()
{
    return this->dataNasc;
}

void Pessoa::setDataNasc(tm data)
{
    this->dataNasc = data;
}

string Pessoa::getCPF()
{
    return this->CPF;
}

void Pessoa::setCPF(string CPF)
{
    this->CPF = CPF;
}

string Pessoa::getRG()
{
    return this->RG;
}

void Pessoa::setRG(string RG)
{
    this->RG = RG;
}

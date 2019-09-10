#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string RG, string CPF)
{
    this->setNome(nome);
    // this->setDataNascimento(dataNasc);
    this->setRG(RG);
    this->setCPF(CPF);
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

tm Pessoa::getDataNascimento()
{
    return this->dataNascimento;
}

void Pessoa::setDataNascimento(tm dataNas)
{
    this->dataNascimento = dataNas;
}

string Pessoa::getRG()
{
    return this->RG;
}

void Pessoa::setRG(string RG)
{
    this->RG = RG;
}

string Pessoa::getCPF()
{
    return this->CPF;
}

void Pessoa::setCPF(string CPF)
{
    this->CPF = CPF;
}

Pessoa::~Pessoa()
{
    cout << "Pessoa deletada." << endl;
}

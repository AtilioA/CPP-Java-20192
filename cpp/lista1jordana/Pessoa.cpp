#include "Pessoa.hpp"

Pessoa::Pessoa()
{

}

Pessoa::Pessoa()
{

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

string Pessoa::getEndereco()
{
    return this->endereco;
}

void Pessoa::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Pessoa::getTelefone()
{
    return this->telefone;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Pessoa::getEmail()
{
    return this->email;
}

void Pessoa::setEmail(string email)
{
    this->email = email;
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

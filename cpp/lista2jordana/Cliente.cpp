#include "Cliente.hpp"

string Cliente::getNome()
{
    return this.nome;
}

void Cliente::setNome(string nome)
{
    this.nome = nome;
}

Date Cliente::getDataNascimento()
{
    return this.dataNascimento;
}

void setDataNascimento(Date dataNascimento)
{
    Cliente::this.dataNascimento = dataNascimento;
}

string Cliente::getRG()
{
    return this.RG;
}

void Cliente::setRG(string RG)
{
    this.RG = RG;
}

string Cliente::getCPF()
{
    return this.CPF;
}

void Cliente::setCPF(string CPF)
{
    this.CPF = CPF;
}

string Cliente::getEndereco()
{
    return this.endereco;
}

void Cliente::setEndereco(string endereco)
{
    this.endereco = endereco;
}

string Cliente::getTelefone()
{
    return this.telefone;
}

void Cliente::setTelefone(string telefone)
{
    this.telefone = telefone;
}

string Cliente::getEmail()
{
    return this.email;
}

void Cliente::setEmail(string email)
{
    this.email = email;
}

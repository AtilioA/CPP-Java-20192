#include "Funcionario.hpp"

string Funcionario::getNome()
{
    return this->nome;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

tm Funcionario::getDataNascimento()
{
    return this->dataNascimento;
}

void setDataNascimento(tm dataNascimento)
{
    Funcionario::this->dataNascimento = dataNascimento;
}

string Funcionario::getRG()
{
    return this->RG;
}

void Funcionario::setRG(string RG)
{
    this->RG = RG;
}

string Funcionario::getCPF()
{
    return this->CPF;
}

void Funcionario::setCPF(string CPF)
{
    this->CPF = CPF;
}

string Funcionario::getEndereco()
{
    return this->endereco;
}

void Funcionario::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Funcionario::getTelefone()
{
    return this->telefone;
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Funcionario::getEmail()
{
    return this->email;
}

void Funcionario::setEmail(string email)
{
    this->email = email;
}

string getMatricula()
{
    return this->matricula;
}

void setMatricula(string matricula)
{
    this->matricula = matricula;
}

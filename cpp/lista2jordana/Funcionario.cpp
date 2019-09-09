#include "Funcionario.hpp"

Funcionario::Funcionario(string nome, string matricula, string RG, string CPF, string end, string tel, string email)
{
    this->setNome(nome);
    // this->setDataNascimento(dataNasc);
    this->setRG(RG);
    this->setCPF(CPF);
    this->setEndereco(end);
    this->setTelefone(tel);
    this->setEmail(email);
    
    cout << "Funcionario criado." << endl;
}

Funcionario::~Funcionario()
{
    cout << "Funcionario deletado." << endl;
}

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

void Funcionario::setDataNascimento(tm dataNascimento)
{
    this->dataNascimento = dataNascimento;
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

string Funcionario::getMatricula()
{
    return this->matricula;
}

void Funcionario::setMatricula(string matricula)
{
    this->matricula = matricula;
}

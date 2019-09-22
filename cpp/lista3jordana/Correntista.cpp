#include "Correntista.hpp"

Correntista::Correntista(string endereco, string telefone, string email/*, Conta conta*/)
{
    this->setEndereco(endereco);
    this->setTelefone(telefone);
    this->setEmail(email);
    // this->setConta(conta);
}

Correntista::~Correntista()
{
    cout << "Correntista deletado." << endl;
}

string Correntista::getEndereco()
{
    return this->endereco;
}

void Correntista::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Correntista::getTelefone()
{
    return this->telefone;
}

void Correntista::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Correntista::getEmail()
{
    return this->email;
}

void Correntista::setEmail(string email)
{
    this->email = email;
}

/*
Conta Correntista::getConta()
{
    return this->conta;
}

void Correntista::setConta(Conta conta)
{
    this->conta = conta;
}
*/

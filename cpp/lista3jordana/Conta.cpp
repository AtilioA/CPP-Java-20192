#include "Conta.hpp"

Conta::Conta(string numConta, string agencia, float saldo)
{
    this->setNumConta(numConta);
    this->setAgencia(agencia);
    this->setSaldo(saldo);
}

Conta::~Conta()
{

}

string Conta::getNumConta()
{
    return this->numConta;
}

void Conta::setNumConta(string numConta)
{
    this->numConta = numConta;
}

string Conta::getAgencia()
{
    return this->agencia;
}

void Conta::setAgencia(string agencia)
{
    this->agencia = agencia;
}

float Conta::getSaldo()
{
    return this->saldo;
}

void Conta::setSaldo(float saldo)
{
    this->saldo = saldo;
}

void Conta::deposito(float valor)
{
    this->setSaldo(this->getSaldo() + valor);
}

void Conta::retirada(float valor)
{
    this->setSaldo(this->getSaldo() - valor);
}

float Conta::extrato()
{
    this->getSaldo();
}

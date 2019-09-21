#include "Conta.hpp"

Conta::Conta(string numConta, string agencia, float saldo)
{
    this->setNumConta(numConta);
    this->setAgencia(agencia);
    this->setSaldo(saldo);
}

Conta::~Conta()
{
    cout << "Conta deletada." << endl;
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

void Conta::registraTransacao(float valor, string descricao)
{
    Transacao *nova;

    time_t t = time(0);
    tm *data = localtime(&t);

    nova = new Transacao(*data, valor, descricao);
    // this->getTransacoes()->push_back(nova); // não está inserindo
    cout << "Transacao registrada." << endl;
}

void Conta::deposito(float valor)
{
    this->setSaldo(this->getSaldo() + valor);
    this->registraTransacao(valor, "deposito");
}

void Conta::retirada(float valor)
{
    this->setSaldo(this->getSaldo() - valor);
    this->registraTransacao(valor, "retirada");
}

vector<Transacao *> *Conta::getTransacoes()
{
    return this->transacoes;
}

// void Conta::printaExtrato()
// {
//     for (int i = 0; i < this->getTransacoes()->size(); i++)
//     {
//         cout << this->getTransacoes()->at(i) << endl;
//     }
// }

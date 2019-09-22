#include "ContaPoupanca.hpp"

tm ContaPoupanca::getDataAniversarioConta()
{
    return this->dataAniversarioConta;
}

void ContaPoupanca::setDataAniversarioConta(tm dataAniversarioConta)
{
    this->dataAniversarioConta = dataAniversarioConta;
}

ContaPoupanca::~ContaPoupanca()
{
    cout << "Conta poupanca deletada." << endl;
}

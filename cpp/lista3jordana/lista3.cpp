#include <iostream>
#include <vector>
#include <string>
#include "Pessoa.hpp"
#include "Conta.hpp"

using namespace std;

int main()
{
    cout << "leakando brabamente" << endl;
    Pessoa *pessoa;
    tm nasci;
    Conta *conta;

    nasci.tm_year = 1900 + 118;
    nasci.tm_mon = 10;
    nasci.tm_mday = 0;

    pessoa = new Pessoa("Renan", nasci, "12345678900", "12345123");
    conta = new Conta("2832", "1", 7000);

    // cout << pessoa->getDataNasc().tm_mon << endl;

    cout << conta->getSaldo() << endl;
    cout << conta->getNumConta() << endl;
    cout << conta->getAgencia() << endl;

    cout << "Depositando 500 reais..." << endl;
    conta->deposito(500);
    cout << "Saldo apos deposito: " << conta->getSaldo() << endl;


    cout << "Retirando 1250 reais..." << endl;
    conta->retirada(1250);
    cout << "Saldo apos retirada: " << conta->getSaldo() << endl;

    cout << "\nNumero de movimentacoes: " << conta->getTransacoes()->size() << endl;
    // conta->printaExtrato();

    delete pessoa;
    delete conta;

    return 0;
}

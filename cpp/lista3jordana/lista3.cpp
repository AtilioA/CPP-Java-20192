#include <iostream>
#include <vector>
#include <string>
#include "Pessoa.hpp"
#include "Conta.hpp"
// #include "Correntista.hpp"
#include "PessoaFisica.hpp"
// #include "PessoaJuridica.hpp"

using namespace std;

int main()
{
    Pessoa *pessoa;
    tm nasci;
    Conta *conta;
    PessoaFisica *pf;

    nasci.tm_year = 1900 + 118;
    nasci.tm_mon = 10;
    nasci.tm_mday = 0;

    pessoa = new Pessoa("Renan", nasci, "12345678900", "12345123");
    conta = new Conta("2832", "1", 7000);
    pf = new PessoaFisica("Renan", nasci, "12345678900", "12345123", "rua", "27", "atiliodadalto"/*, *conta*/);

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

    // cout << "\nNumero de movimentacoes: " << conta->getTransacoes()->size() << endl;
    // conta->printaExtrato();

    // cout << pf->getEndereco() << pf->getTelefone() << pf->getCPF() << pf->getEmail() << pf->getNome() << endl;

    delete pessoa;
    delete conta;
    delete pf;

    return 0;
}

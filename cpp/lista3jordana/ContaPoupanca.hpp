#ifndef _CONTAP_
#define _CONTAP_
#include "Conta.hpp"

class ContaPoupanca: public Conta
{
    private:
        tm dataAniversarioConta;

    public:
        ContaPoupanca(string numConta, string agencia, float saldo) : Conta(numConta, agencia, saldo){}
        ~ContaPoupanca();

        tm getDataAniversarioConta();
        void setDataAniversarioConta(tm dataAniversarioConta);
};

#endif

#ifndef _CONTACC_
#define _CONTACC_
#include "Conta.hpp"

class ContaCorrenteC: public Conta
{
    public:
        ContaCorrenteC(string numConta, string agencia, float saldo) : Conta(numConta, agencia, saldo){}
        ~ContaCorrenteC();
};

#endif

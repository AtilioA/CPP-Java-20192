#ifndef _CONTACL_
#define _CONTACL_
#include "Conta.hpp"

class ContaCorrenteL: public Conta
{
    private:
        float valorLimite;
    public:
        ContaCorrenteL(string numConta, string agencia, float saldo) : Conta(numConta, agencia, saldo){}
        ~ContaCorrenteL();
        float getValorLimite();
        void setValorLimite(float valorLimite);
};

#endif

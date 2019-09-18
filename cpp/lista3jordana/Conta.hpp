#ifndef _CONTA_
#define _CONTA_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Conta
{
    private:
        string numConta;
        string agencia;
        float saldo;
        // <vector *>Transacao trasacao;

    public:
        Conta(string numConta, string agencia, float saldo);
        ~Conta();
        void deposito(float valor);
        void retirada(float valor);
        float extrato();
        string getNumConta();
        void setNumConta(string numConta);
        string getAgencia();
        void setAgencia(string agencia);
        float getSaldo();
        void setSaldo(float saldo);
};

#endif

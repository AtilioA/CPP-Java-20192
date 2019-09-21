#ifndef _CONTA_
#define _CONTA_
#include <iostream>
#include <string>
#include <vector>
#include "Transacao.hpp"
#include <time.h>

using namespace std;

class Conta
{
    private:
        string numConta;
        string agencia;
        float saldo;
        vector<Transacao *> *transacoes;

    public:
        Conta(string numConta, string agencia, float saldo);
        ~Conta();
        void registraTransacao(float valor, string descricao);
        void deposito(float valor);
        void retirada(float valor);
        float extrato();
        string getNumConta();
        void setNumConta(string numConta);
        string getAgencia();
        void setAgencia(string agencia);
        float getSaldo();
        void setSaldo(float saldo);
        vector<Transacao *> *getTransacoes();
        void printaExtrato();
        void fodase();
};

#endif

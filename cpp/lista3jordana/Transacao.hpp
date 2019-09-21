#ifndef _TRANSACAO_
#define _TRANSACAO_
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Transacao
{
    private:
        tm data;
        float valor;
        string descricao;

    public:
        Transacao(tm data, float valor, string descricao);
        ~Transacao();
        tm getData();
        void setData(tm data);
        float getValor();
        void setValor(float valor);
        string getDescricao();
        void setDescricao(string descricao);
};

#endif

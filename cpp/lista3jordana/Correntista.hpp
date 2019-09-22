#ifndef _CORRENTISTA_
#define _CORRENTISTA_
#include "Conta.hpp"

class Correntista
{
private:
    string endereco;
    string telefone;
    string email;
    // Conta conta;

public:
    Correntista(string endereco, string telefone, string email/*, Conta conta*/);
    ~Correntista();
    string getEndereco();
    void setEndereco(string endereco);
    string getTelefone();
    void setTelefone(string telefone);
    string getEmail();
    void setEmail(string email);
    Conta getConta();
    void setConta(Conta conta);
};

#endif
